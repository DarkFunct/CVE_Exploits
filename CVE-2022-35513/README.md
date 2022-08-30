# blink1-pass-decrypt ⭐
poc and simple script designed for reversing the ciphertext found at /blink/input  
of the api server in blink1control2 installations (versions <=2.2.7).

## the exploit - CVE-2022-35513 ❗
the blink1control2 app utilises weak password encryption and an insecure method of storage which can be found by accessing the /blink1/input url
of the api server.  
password ciphertext for skype logins and email are listed and can be decrypted.

## prerequisites ✔
* node
* node argparse module
* node simplecrypt module
```
sudo apt install npm
npm install argparse
npm install simplecrypt
```

## usage ℹ
use `./blink1-pass-decrypt` or `node blink1-pass-decrypt` with `-h` or `--help` for help menu:
```
usage: blink-pass-decrypt [-h] ciphertext

decrypts passwords found at the /blink/input url of the blink1control2 api
server (version <= 2.2.7 ).

positional arguments:
  ciphertext  encrypted password string to use

optional arguments:
  -h, --help  show this help message and exit
```
example:
```
node blink1-pass-decrypt '69827e0ecea378946e999df4313cb9a1e49c049a7b9bac8bf1105cdec9f221c8'
```
