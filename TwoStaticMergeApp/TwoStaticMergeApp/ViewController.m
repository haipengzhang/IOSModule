//
//  ViewController.m
//  TwoStaticMergeApp
//
//  Created by Jimzhang on 2023/3/22.
//

#import "ViewController.h"
@import LGSwiftA;

/**
 在LGSwiftA.framework和LGSwiftB.framework两个静态库中，都存在LGSwiftTeacher，有时甚至会存在头文件相同的情况。所以在案例中，手动构建的目录结构，可以有效避免相同头文件的冲突。并且在使用的时候，导入的头文件是谁的，使用的LGSwiftTeacher对应就是谁的
 
 链接静态库，只要没指定-all_load或-ObjC参数，默认会使用-noall_load参数。所以在同一个文件内，即使导入两个头文件，当链接一个文件找到代码后，就不会链接另一个，因此也不会冲突
 */
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    LGSwiftTeacher *teacher = [LGSwiftTeacher new];
    [teacher walk];
}


@end
