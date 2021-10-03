#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <sys/socket.h>
#include <string>

int main(int argc,char* argv[]){
	std::string teststr = "";
	socket	sock1;
	socket.recv("https://www.google.com/",teststr);
	std::cout << teststr << std::endl;
	return 0;
}
