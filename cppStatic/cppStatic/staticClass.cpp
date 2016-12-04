//
//  staticClass.cpp
//  cppStatic
//
//  Created by Rob on 04/12/2016.
//  Copyright © 2016 Rob. All rights reserved.
//

#include "staticClass.hpp"

/*
  The idea behind static classes and variables is to help facilitate
  call back routines, and threads inside a class which require a 
  static function or addressing of static variables
 
 
 */

// important:  static variables need to be defined outside of class
// inside class is just defintion
int staticClass::count;

staticClass::staticClass() {
    
    // initialise our static variable
    staticClass::count = 0;

    // note: you can access both local class variables including
    // static variables from functions in your classs
}


void staticClass::setCount(int newValue) {
    staticClass::count = newValue;
}

int staticClass::getCount() {
    // note:  You can only access static class variables
    // and passed variables from a static  function within
    // a static class
    return staticClass::count;
}
