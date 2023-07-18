//
//  LGTeacher.m
//  LGOCFramework
//
//  Created by Jimzhang on 2023/3/21.
//

#import "LGTeacher.h"
#import "LGStudent.h"

@implementation LGTeacher

- (void)speak {
    LGStudent *student = [[LGStudent alloc] init];
    [student speak];
}

- (void)walk {
    NSLog(@"LGTeacher speak");
}

@end
