//
//  LGSwiftFramework.h
//  LGSwiftFramework
//
//  Created by Jimzhang on 2023/3/21.
//

#import <Foundation/Foundation.h>

//! Project version number for LGSwiftFramework.
FOUNDATION_EXPORT double LGSwiftFrameworkVersionNumber;

//! Project version string for LGSwiftFramework.
FOUNDATION_EXPORT const unsigned char LGSwiftFrameworkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <LGSwiftFramework/PublicHeader.h>

// Swift framework（只要项目中存在swift文件），自动生成的framework header（LGSwiftFramework.h）不是伞文件，不能在里面import header实现自动映射module
// 自动生成的framework modulemapmap只会自动处理swift文件(LGSwiftTeacher)对应的module
// 其他的OC文件需要自己写modulemap文件，显式的映射module
// 本framework把LGSwiftFramework重命名成headers.h做映射
// 也可以不通过伞文件，直接编辑module map文件
#import <LGSwiftFramework/LGOCStudent.h>
