//
//  main.cpp
//  cppStringManipulation
//
//  Created by Rob on 04/12/2016.
//  Copyright © 2016 Rob. All rights reserved.
//

#include <iostream>
#include <string.h>
#include <vector>
#include <sstream>

std::vector<std::string> split(std::string str, char delimiter) {
    std::vector<std::string> internal;
    std::stringstream ss(str); // Turn the string into a stream.
    std::string tok;
    
    while(getline(ss, tok, delimiter)) {
        internal.push_back(tok);
    }
    
    return internal;
}

bool startsWith(std::string input, std::string tofind) {
    // strncmp = exact match = 0, anything else mismatch
    return (strncmp(input.c_str(), tofind.c_str(), tofind.length())==0);
}



int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, string manipulation examples!\n";
    std::string myString = "f 29825/1/29825 42257/2/42257 47438/3/47438";
    if (startsWith(myString,"f ")) {
        std::cout << "String starts with 'f'\n";
    }
    
    std::vector<std::string>  mylist = split (myString,'/');
    
    for (int x=0;x<mylist.size();x++) {
        std::cout << x <<")"<< mylist.at(x) << "\n";
    }
    
    return 0;
}
