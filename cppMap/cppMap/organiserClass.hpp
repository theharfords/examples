//
//  organiserClass.hpp
//  cppMap
//
//  Created by Rob on 04/12/2016.
//  Copyright © 2016 Rob. All rights reserved.
//

#ifndef organiserClass_hpp
#define organiserClass_hpp

#include <stdio.h>
#include <map>
#include <vector>
#include <string>
#include <iostream>

/*
 
 simplish class to show how map works to create a two dimentional arrray
 
 
 */


class organiserClass {
    
public:
    void AddNewItem(std::string Section, std::string itemtoAdd);
    std::vector<std::string>  getSectionItems(std::string section);
    
    
    
private:
    std::map<std::string , std::vector<std::string > > items;
};


#endif /* organiserClass_hpp */
