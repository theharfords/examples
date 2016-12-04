//
//  main.cpp
//  cppFileReader
//
//  Created by Rob on 04/12/2016.
//  Copyright © 2016 Rob. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>



const std::string ResourcePath(std::string& FilePath) {
    
    std::fstream hFile;
    
    std::string nfilepath = FilePath;
    
    //search for file by going up file directory tree up to 5 times
    int attempts = 0;

    hFile.open(nfilepath.c_str(), std::ios::in);
    while (!hFile.is_open() && attempts < 5) {
        nfilepath = "../" + nfilepath;
        attempts += 1;
        hFile.open(nfilepath.c_str(), std::ios::in);
    }
    
    hFile.close();
    std::cout << "final file path:" << nfilepath << "\n";
    return nfilepath;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    std::string filename = "/Users/rob/Documents/dev/cpp/examples/cppFileReader/rob.txt";
    
    std::ifstream file{ResourcePath(filename).c_str()};
    
    std::string line;
    if (file.is_open()) {
        while (!file.eof()) {
        
            std::getline(file, line);
            if (line.empty()) {
                continue;
            }
        
            std::cout << line << std::endl;
        }// end while
    file.close();
    }

    
    return 0;
}
