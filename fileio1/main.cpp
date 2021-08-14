/*
File:       br_to_csv_src.cpp
Project:    bottlerecTocsv
-----------------------------
Peronsal project for formatting
my custom 'Bottle Records' to
.csv files for SQL compatibility.

[Current State]
Opens/creates a file and writes a string to it.
Then, opens the file, gets a string, and prints
it.

[Notes/Comments]
This project was to refamiliarize myself with the
file read/write facilities in C/C++.
For now, the code for reading the file will only
take characters up to whitespace (as well as new
line, EOF, etc.).

brianc2788@gmail.com
github.com/user5260
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
        std::string writeString = "this is a string.";
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
        // only reads characters up to whitespace. see getline().
        fileIn >> readString;
        fileIn.close();
        //cant get print to work
        //printf("read from file: %s",readString);
        std::cout << "read from file: " << readString << std::endl;
    }

    return 0;
}
