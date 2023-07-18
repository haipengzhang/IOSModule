//
//  LGOCFramework.h
//  LGOCFramework
//
//  Created by Jimzhang on 2023/3/21.
//

#import <Foundation/Foundation.h>

//! Project version number for LGOCFramework.
FOUNDATION_EXPORT double LGOCFrameworkVersionNumber;

//! Project version string for LGOCFramework.
FOUNDATION_EXPORT const unsigned char LGOCFrameworkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <LGOCFramework/PublicHeader.h>

// 在OC项目中，这个文件是framework构建的默认伞文件，只能引入public权限的header，自动映射成module
// 也可以通过自定义的modulemap文件强制显式声明即使是private的header，project权限的也不支持
#import <LGOCFramework/LGTeacher.h>
#import <LGOCFramework/LGStudent.h>
