Make sure to copy the file report.wer found in the folder PoC-Files in the same folder as the executable before running it... I guess I could have included it as a resource in the exe.. but whatever.

Example: "angrypolarbearbug.exe c:\windows\system32\drivers\pci.sys"

This will overwrite pci.sys with trash.
Couldn't repo on one core. 
It can take a little for the bug to win race..
It might straight up not work on some CPUs.. I don't know.. 
You need an internet connection. !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

It's a non security issue really. You should have partial control over the write (change string fields in report.wer maybe?) .. I havn't tested.. but in theory if you can dump some script in it and overwrite filetypes that potentially execute it, that could be interesting.

You can also use it to perhaps disable third party AV software..
Windows defender will be harder since those files can only be modified by trusted installer, not even system.


