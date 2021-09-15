/*
just a refresher for how to do
io with files with c/cpp.
*/
#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib>

int main(int argc,char* argv[]){
    std::string fileName = "testfile1.txt";

    std::ofstream fileOut;
    fileOut.open(fileName);
    if (!fileOut.is_open()){
        printf("couldn't open file for write operation.\n");
    }
    else{
        //std::string writeString = "this is a NEW string.";
        printf("Writing to file: %s\n",&fileName);
        std::string writeString = "";
        printf("Enter a string to write to file:\n");
        getline(std::cin,writeString);
        fileOut << writeString << std::endl;
        fileOut.close();
    }

    std::ifstream fileIn;
    fileIn.open(fileName);
    if (!fileIn.is_open()){
        printf("couldn't open file for read operation.\n");
    }
    else{
        std::string readString;
        //fileIn >> readString;
        getline(fileIn,readString);
        fileIn.close();
        //printf("read from file: %s",readString);
        std::cout << "read from file: " << readString << std::endl;
    }

    return 0;
}
