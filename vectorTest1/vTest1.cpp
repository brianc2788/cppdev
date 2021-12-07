// vector refresher
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

int main(int argc,char* argv[]){
    std::cout << "this is a test. with vectors. i mean, one. just one vector." << std::endl;
    std::vector<std::string> sVector;
    std::cout << "Enter a string.\n"
              << "To end input:\n"
              << "Windows: Ctrl+Z\n"
              << "Other: Ctrl+D\n";

    for (std::string s;std::cin>>s;){
        sVector.push_back(s);
    }

    std::cout << "\ngot your string." << std::endl
              << "you typed:" << std::endl;

    for (int n = 0; n < sVector.size();n++){
	std::cout << sVector[n] << std::endl;
    }
    // iterate through the str vector.
    //for (std::string el : sVector){
    //    std::cout << el << std::endl;
    //}

    return 0;
}
