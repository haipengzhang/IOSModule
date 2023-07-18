//
//  LGSwiftTest.swift
//  TwoStaticMergeApp
//
//  Created by Jimzhang on 2023/3/22.
//

import Foundation
import LGSwiftA

@objc open class LGSwiftTest: NSObject {

   public override init() {
       super.init()

       let t = LGSwiftTeacher()
       t.speak()
   }
}
