


//官网地址: https://www.charlesproxy.com/latest-release/download.do

//1. 下载官网 安装包

//2. 设置移动端手机代理
// 1> 查看电脑端 ip (10.0.0.3)
// 2> 手段和电脑端连接同一个网络(wifi)
// 3> 手机端点击连接wifi右边的 ! 号进入, http 代理 -> 手动 -> 输入服务器(电脑端ip10.0.0.3) -> 端口(8888)


//3.电脑端 安装证书 代理proxy 设置:
// 1> 电脑端安装证书: help -> SSL Proxying -> install charles Root certificate 然后电脑自动安装,此后会在钥匙串中安装一个 charles proxy ca 证书,正常情况下该证书不会被信任,右击证书 -> 显示简介 -> 选择始终信任即可
// 2> 电脑端代理proxy 设置: Proxy -> Proxy Setting -> Proxies -> http proxy -> enable transparent http proxing
// 3> https SSL proxying setting (https 安全传输层 代理设置,http 可以不设置)
//        -> add -> host (*) -> port 443



//4.手机端 安装证书 代理设置 proxy
// 1> help -> SSL Proxying -> install charles Root certificate on  mobile device or remote browser
