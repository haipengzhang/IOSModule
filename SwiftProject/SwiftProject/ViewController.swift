//
//  ViewController.swift
//  SwiftProject
//
//  Created by Jimzhang on 2023/3/22.
//

import UIKit
import OCFramework

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        let Hank: LGTeacherNameString = .hank
        
        let teacher: LGToSwift = LGToSwift()
        teacher.teacherName(forIndex: 1)
    }

}

extension LGToSwift {
   func change() -> Bool {
       return __changeTeacherName(nil)
   }
}
