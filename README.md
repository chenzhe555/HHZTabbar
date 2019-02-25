## Manual installation

pod 'HHZTabbar', :git => 'https://github.com/chenzhe555/HHZTabbar.git'


## Usage
###  1.继承类
1.1[DemoTabbar.h&m](https://github.com/chenzhe555/HHZTabbar/blob/master/HHZTabbar/Demo/DemoTabbar.h)
1.2[DemoTabbarTool.h&m](https://github.com/chenzhe555/HHZTabbar/blob/master/HHZTabbar/Demo/DemoTabbarTool.h)
1.3如果你想自定义底部文本未选中和选中颜色，新建HHZTabbar.plist文件，写入以下代码
```
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0">
<dict>
	<key>normalColor</key>
	<string>999999</string>
	<key>selectedColor</key>
	<string>000000</string>
</dict>
</plist>
```

###  2.使用
参考[AppDelegate.m](https://github.com/chenzhe555/HHZTabbar/blob/master/HHZTabbar/AppDelegate.m)
