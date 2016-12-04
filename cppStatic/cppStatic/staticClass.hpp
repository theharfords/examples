//
//  staticClass.hpp
//  cppStatic
//
//  Created by Rob on 04/12/2016.
//  Copyright © 2016 Rob. All rights reserved.
//

#ifndef staticClass_hpp
#define staticClass_hpp

#include <stdio.h>

class staticClass {
public:
    staticClass();
    void setCount(int newValue);
    static int getCount();
    
private:
    static int count;
    
    
};

#endif /* staticClass_hpp */
