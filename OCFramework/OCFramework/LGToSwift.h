//
//  LGToSwift.h
//  OCFramework
//
//  Created by Jimzhang on 2023/3/22.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, LGTeacherName) {
   LGTeacherNameHank,
   LGTeacherNameCat,
};

typedef NSString * LGTeacherNameString NS_TYPED_EXTENSIBLE_ENUM;

extern NSString *getTeacherName(void);
extern NSString * const LGTeacherCat;
extern LGTeacherNameString const LGTeacherHank;

@interface LGToSwift : NSObject

- (nullable NSString *)teacherNameForIndex:(NSUInteger)index NS_SWIFT_NAME(teacherName(forIndex:));

- (BOOL)changeTeacherName:(nullable NSDictionary<NSString *, id> *)options NS_REFINED_FOR_SWIFT;

/*
NS_TYPED_EXTENSIBLE_ENUM：属性指示编译器，使用struct(swift_wrapper(struct)属性)，通过指定NS_TYPED_ENUM宏，编译器被指示使用enum(swift_wrapper(enum)属性)NS_SWIFT_NAME：通过指定NS_SWIFT_NAME宏，可以添加一些详细信息以使函数清晰可见
NS_REFINED_FOR_SWIFT：通过指定NS_REFINED_FOR_SWIFT宏，Swift的Clang Importer将做一些额外的工作，将该方法导入为私有方法，并以双下划线字符__开头
*/

@end
