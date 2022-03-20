/*
trying pcap in cpp.
*/
#include <iostream>
#include <pcap/pcap.h>

int main(int argc,char* argv[]){
	pcap_t* pc1 = pcap_init();

	char cVar1[5] = "hell";
	std::string str1 = "howdy";

	printf("%s\n%s\n",cVar1,str1);

	return 0;
}