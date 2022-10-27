# Android插件化-Shadow

## Shadow应用组成

host：宿主应用，在Manifest中注册了壳子代理组件

manager：插件管理器，负责下载、安装插件。manager在加载"插件"时，首先需要先加载"插件"中的runtime和loader，再通过loader的Binder（插件应该处于独立进程中避免native库冲突）操作loader进而加载业务App。

loader：

runtime：

### 宿主应用

由如下几个部分组成：

- host：壳应用，在Manifest中注册了壳子代理组件
- manager：插件管理器的动态实现，负责下载、安装插件

### 插件应用

由如下几个部分组成：

- 插件loader：loader的动态实现，业务主要在这里定义插件组件和壳子代理组件的配对关系等。
- 插件runtime：runtime的动态实现，业务主要在这里定义壳子代理组件的实际类。







