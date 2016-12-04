//
//  organiserClass.cpp
//  cppMap
//
//  Created by Rob on 04/12/2016.
//  Copyright © 2016 Rob. All rights reserved.
//

#include "organiserClass.hpp"


void organiserClass::AddNewItem(std::string section, std::string itemtoAdd){
    
    // 1.Do we have a section already in our map ?
    /*
     we first create an iteratior to search through items in out map (called items - defined in header)
     */
    std::map<std::string, std::vector<std::string> >::iterator batch;
    
    std::vector<std::string> ListofSections;
    // now we search items and store result in batch (defiend above)
    batch = items.find(section);
    if (batch == items.end()) {
        // need to add out item to a new list
        ListofSections = std::vector<std::string>();
        ListofSections.push_back(itemtoAdd);
        items[section]=ListofSections;
    }else
    {
        
        // we have a list, so get it, add our item to it, then re-assign it back to the map
        ListofSections = items[section];
        ListofSections.push_back(itemtoAdd);
        items[section] = ListofSections;
    }
    

    std::cout << "Added to section:" << section << " item:" << itemtoAdd << "\n";
}


std::vector<std::string>  organiserClass::getSectionItems(std::string section) {
    // 1.Do we have a section already in our map ?
    /*
     we first create an iteratior to search through items in out map (called items - defined in header)
     */
    std::map<std::string, std::vector<std::string> >::iterator batch;
    
    std::vector<std::string> ListofSections;
    // now we search items and store result in batch (defiend above)
    batch = items.find(section);
    if (batch != items.end()) {
        // we found our item
        std::cout << "getSectionItems found:" << section << "\n";
        return items[section];
    }
    
    // not found , so return emtpy list
    return std::vector<std::string> ();
    
    
}
