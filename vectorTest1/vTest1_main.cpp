// vector refresh
#include <iostream>
#include <string>
#include <vector>

int main(int argc,char* argv[]){
    std::cout << "this is a test." << std::endl;
    std::vector<std::string> sVector;
    std::cout << "Enter a string: ";

    for (std::string s;std::cin>>s;){
        sVector.push_back(s);
    }

    std::cout << "got your string." << std::endl
              << "you typed:" << std::endl;
    for (std::string el : sVector){
        std::cout << el << std::endl;
    }

    return 0;
}
