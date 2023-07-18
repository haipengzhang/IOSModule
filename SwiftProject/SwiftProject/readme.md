#  SwiftProject链接OCFramework

无法对LGTeacherNameString类型的属性赋值枚举值
teacherName方法的命名，被改为teacherName(for:)，但我们预期的是teacherName(forIndex:)
changeTeacherName方法，我们希望它作为私有方法，并以双下划线字符__开头

解决办法：
可以使用特定宏，改变映射规则，但是需要修改被链接的库的源代码

另外可以通过：
使用.apinotes文件，代替宏的方式
在OCFramework目录下，创建OCFramework.apinotes文件  
在OCFramework中，将OCFramework.apinotes文件加入到项目  
.apinotes文件必须要放在SDK的目录中，采用yaml格式书写，类似JSON格式
