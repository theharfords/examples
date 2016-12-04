//
//  main.cpp
//  cppMap
//
//  Created by Rob on 04/12/2016.
//  Copyright © 2016 Rob. All rights reserved.
//

#include <iostream>
#include "organiserClass.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, this is a demo showing how maps work in cpp!\n";
    
    organiserClass  mylists;
    
    mylists.AddNewItem("buildings", "house");
    mylists.AddNewItem("buildings", "office");
    mylists.AddNewItem("buildings", "garage");
    mylists.AddNewItem("buildings", "shed");
    
    mylists.AddNewItem("fruits", "apple");
    mylists.AddNewItem("fruits", "orange");
    
    std::vector<std::string> items = mylists.getSectionItems("buildings");
    
    for (int a=0; a<items.size();a++){
        std::cout << a << ") " << items.at(a) << "\n";
    }
    
    return 0;
}
