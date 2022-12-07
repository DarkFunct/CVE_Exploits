# Ultimate Member <= 2.3.1 - Open Redirect

## Summery

Some URL components (Facebook, Twitter, LinkedIn, Instagram, YouTube, SoundCloud, VKontakte) in user profile exist open redirect vulnerability.

## Vulnerability proof

'@' character can be used to bypass the host detection of some URL components.

1.Enter malicious URLs into the components.

For example: 

Facebook component checks whether the URL redirects to https://facebook.com or not. Attackers construct malicious URL https://facebook.com@baidu.com and save it.

![image](https://user-images.githubusercontent.com/48757788/165758151-85d66565-0b53-4b16-84a9-db1fe15d5756.png)

2.Reload the user profile and click "Facebook" component.

![image](https://user-images.githubusercontent.com/48757788/165759206-cd9ffc31-67db-41a3-a51c-6c8cdce79078.png)

3.When people click the "Facebook" URL, website will redirects to https://baidu.com.

![image](https://user-images.githubusercontent.com/48757788/165759766-feace0d9-7d4c-4e67-b08f-463653587c91.png)

