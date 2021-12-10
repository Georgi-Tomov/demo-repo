#include <stdio.h>

int functionAddition(int iFirstNumber, int iSecondNumber);
int main(){
    int iFirstNumber = 5;
    int iSecondNumber = 10;
    //iResult holds the result from the function
    int iResult = functionAddition(iFirstNumber, iSecondNumber);

    printf("The result from this addition is: %d\n", iResult);
    return 0;
}
int functionAddition(int iFirstNumber, int iSecondNumber){
    return iFirstNumber + iSecondNumber;
}