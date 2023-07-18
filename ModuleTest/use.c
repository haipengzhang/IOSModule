//
//  use.c
//  ModuleTest
//
//  Created by Jimzhang on 2023/3/21.
//

#import "B.h"
void use() {
#ifdef ENABLE_A
 a();
#endif
}
