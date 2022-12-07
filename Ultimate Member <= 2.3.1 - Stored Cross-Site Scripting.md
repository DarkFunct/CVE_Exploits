# Ultimate Member <= 2.3.1 - Stored Cross-Site Scripting

## Summary

Biography component in user profile exists stored XSS vulnerability.

## Vulnerability proof

1.Encode XSS payload by Unicode

For example:

<script>alert(1)</script>


![image](https://user-images.githubusercontent.com/48757788/165755622-eab653e7-5b1c-4f4c-a459-f3de3bb652ec.png)

2.Enter the encoded payload into the Biography component and save it.

![image](https://user-images.githubusercontent.com/48757788/165756253-c43c85c1-291b-434f-968c-1d8fa7271292.png)

3.Reload the user profile and the script is executed.

![image](https://user-images.githubusercontent.com/48757788/165756427-b3c568a5-06de-4e70-9944-975fc0a2fe4f.png)


