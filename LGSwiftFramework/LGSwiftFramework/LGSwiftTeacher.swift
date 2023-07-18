//
//  LGSwiftTeacher.swift
//  LGSwiftFramework
//
//  Created by Jimzhang on 2023/3/21.
//

// Framework项目中，没有桥接文件的概念，只能通过把oc文件module映射调用
import Foundation
import LGSwiftFramework_Private

@objc open class LGSwiftTeacher: NSObject {
    @objc public func speak() {
        let s = LGOCStudent()
        s.speak()
        
        let ps = LGOCStudent_Private()
        ps.private_speak()
    }
    
    @objc public func walk() {
        print("walk!")
    }
}
