# 🎓 校园网 IPv6 免计费白嫖与二次元 Home Lab 连接指南

本指南介绍如何利用高校校园网对 IPv6 流量默认放行、不计费的“策略漏洞”，配合家中的 **Dell PowerEdge R730xd (PVE + 黑群晖)** 基础架构，实现外网 **0 元、免转码、丝滑看番与畅游互联网** 的高级网络实验。

> ⚠️ **声明：** 本文涉及的技术手段仅供网络工程技术交流与实验，请自觉遵守学校网络管理规定。

---

## 💡 核心原理：IPv6 绿色通道

很多大学的校园网计费网关（AC/BRAS）在设计时，仅针对 IPv4 数据包进行拦截和 Web 策略跳转（即逼你登录充值的认证页面）。而对 IPv6 数据包则默认不进行策略拦截或流量统计。

只要你的设备获得了全球唯一的公网 IPv6 地址，无需经过计费网关认证，数据包就能直接穿透校园网网关连入广域网。

---

## 🔍 第一阶段：环境检测 (1st. Environment Check)

在宿舍连上校园网（**先不要登录校园网收费账号**），使用你的 MacBook 或 Windows PC 进行以下连通性测试。

### 1. 网页端快速验证
直接用浏览器访问以下 IPv6 权威检测网站：
* 🌐 [test-ipv6.com](https://www.test-ipv6.com/)
* 🌐 [ipv6.test-ipv6.com](https://ipv6.test-ipv6.com/)

*若测试结果显示 IPv6 连通成功，说明物理通道已畅通。*

### 2. 终端命令行验证
打开终端（Terminal / PowerShell），强制执行 IPv6 路由检测：

```bash
# Windows / macOS / Linux 通用（指定 IPv6 节点）
ping -6 ipv6.baidu.com

# macOS / Linux 特有原生命令
ping6 baidu.com
