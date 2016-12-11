//
//  main.cpp
//  cppAuto
//
//  Created by Rob on 11/12/2016.
//  Copyright © 2016 Rob. All rights reserved.
//

#include <iostream>
#include <vector>


int main(int argc, const char * argv[]) {

    std::cout << "Hello, this is an example as to how use c++ version 11 onwards auto feature\n";

    // for this example we simply create a list of strings in a vector then we sort them
    // in alphabetical order using the auto function
    
    std::vector<std::string> myList;
    myList.push_back("apples");
    myList.push_back("zebra");
    myList.push_back("donkey");
    myList.push_back("mellon");
    myList.push_back("banana");
    myList.push_back("apples");
    
    // we sort by swaping items in list
    // e.g. if next item in the list is
    
    
    //  auto process_vertex = [&] (const std::vector<std::string> & vertex_data) {
    auto swap_items = [&] (int itemIndex1 , int ItemIndex2)  {
        std::string savedOriginal = myList.at(itemIndex1);
        myList.at(itemIndex1) = myList.at(ItemIndex2);
        myList.at(ItemIndex2) = savedOriginal;
    };
    
    

    if (myList.size() < 2) {
        std::cout << "not enought items to sort!" << std::endl;
    }
    else{
        
        // lets sort
        bool sorted = false;
        while (!sorted) {
            sorted = true;
            for (int count=0; count < myList.size()-1; count++) {
                if (myList.at(count).compare( myList.at(count+1)) >0)
                {
                    std::cout << "swapping :" << myList.at(count) << " with :" << myList.at(count+1) << std::endl;
                    swap_items(count,count+1);
                    sorted = false;
                }
            }
        
        } // end of while loop
        std::cout << std::endl << "Sorted list below" << std::endl;
        for (int count=0; count<myList.size(); count++) {
            std::cout << myList.at(count) << std::endl;
        }
        
        
    }
    
    return 0;
}
