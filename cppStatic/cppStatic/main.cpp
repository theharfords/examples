//
//  main.cpp
//  cppStatic
//
//  Created by Rob on 04/12/2016.
//  Copyright © 2016 Rob. All rights reserved.
//

#include <iostream>
#include "staticClass.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, this is s static class examples !\n";
    staticClass  myStaticClass;
    myStaticClass.setCount(102);
    
    std::cout << "Value of count:" << myStaticClass.getCount() << std::endl;
    return 0;
}
