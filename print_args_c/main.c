/*******************************
print_args
testing printing the strings
from argv[].
*******************************/
#include <stdio.h>
#include <string.h>

int main(int argc,char* argv[]){
    int argvSize = (sizeof(*argv)/sizeof(*argv[0]));
    printf("number of args: %lu\n",argvSize);

    for(int n = 1; n <= argvSize;n++){
        printf("arg #%d:\t%s\n",n,argv[n]);
    }
    return 0;
}
