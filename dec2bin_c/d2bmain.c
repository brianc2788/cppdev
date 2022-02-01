/******************************************************
# dec2bin - Decimal-to-Binary converter #
-----------------------------------------
Prompts user for a decimal number. Prints
the binary equivalent.

brianc2788@gmail.com
******************************************************/
#include <stdio.h>
#include <stdbool.h>

int nBitArray[32];
void PrintBitArray(int nDecimal);

int main(int argc,char* argv[]){
    printf("Enter a decimal number to see it's binary equivalent.\n");
    printf("Enter '0' to exit.\n\n");
    int nUsrInput = 1;
    bool bRun = true;
    while(bRun){
        if (nUsrInput != 0){
            printf("Enter: ");
            scanf("%d",&nUsrInput);
            PrintBitArray(nUsrInput);
        }
        else if (nUsrInput == 0){
            bRun = false;
        }
    }

    return 0;
}

void PrintBitArray(int nDecimal){
    //If the user enters "1"...
    if (nDecimal == 1) {
        printf("1\n*1 bit\n\n");
    }
    else{
        //Create an array of bits.
        int nIndex = 0;
        while(nDecimal != 0){
            nBitArray[nIndex] = (nDecimal % 2);
            nDecimal = nDecimal/2;
            if(nDecimal != 0) nIndex++;
        }

        //Print the array of bits in reverse.
        for(int n = nIndex; n >= 0; n--){
            printf("%d",nBitArray[n]);
        }

        //Print bits & bytes.
        int nBits = nIndex+1;
        float fBytes = nBits/8.0f;
        printf("\n*%d Bits / %.1f Bytes.\n\n", nBits,fBytes);
    }
}