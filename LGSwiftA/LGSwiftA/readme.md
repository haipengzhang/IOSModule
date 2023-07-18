#  Swift没有头⽂件的概念，外界如何使⽤Swift中public修饰的类和函数？
    Swift库中引⼊了⼀个全新的⽂件.swiftmodule  

在LGSwiftA、LGSwiftB项目中，选择Build Phases，创建Run Script，写入以下代码：cp -Rv -- "${BUILT_PRODUCTS_DIR}/" "${SOURCE_ROOT}/../Products"
使用cp命令,将编译后的.framework文件拷贝到Products目录

## 本demo演示两个静态framework的合并，模拟pod use framework的文件组织形式

使用libtool命令，合并LGSwiftA和LGSwiftB两个静态库
libtool -static -o libLGSwiftC.a LGSwiftA.framework/LGSwiftA LGSwiftB.framework/LGSwiftB
生成了libLGSwiftC.a 但是提示冲突
libtool: warning same member name (LGSwiftTeacher.o) in output file used for input files: LGSwiftA.framework/LGSwiftA(LGSwiftTeacher.o) and: LGSwiftB.framework/LGSwiftB(LGSwiftTeacher.o) due to use of basename, truncation and blank padding

使用ar -t libLGSwiftC.a命令，查看libLGSwiftC.a的文件列表__.SYMDEF
__.SYMDEF
LGSwiftA_vers.o
LGSwiftTeacher.o
LGSwiftB_vers.o
LGSwiftTeacher.o

如果是OC动态库，.framework中可以舍弃Modules目录，将两个静态库的头文件拷贝到一起即可

解决办法：
Products目录下，创建LGSwiftC目录，将库文件libLGSwiftC.a拷贝到LGSwiftC目录下  
仿照Cocoapods生成三方库的目录结构，在LGSwiftC目录下，创建Public目录，将LGSwiftA.framework和LGSwiftB.framework拷贝到Public目录下  
打开LGSwiftA.framework和LGSwiftB.framework文件，将里面的库文件、.plist文件、签名等信息全部删除，最终只保留Headers和Modules两个目录  
虽然生成.framework时，自动创建了Modules目录。但编译时，.modulemap文件和x.swiftmodule目录，应该和Headers目录平级
将.modulemap文件和x.swiftmodule目录，从Modules目录移动到.framework文件下，和Headers目录平级。然后删除Modules目录  
此时静态库合并完成
App使用合并后的静态库
