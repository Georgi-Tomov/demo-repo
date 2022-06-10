#include <stdio.h>
/*
7. Дефинирайте променливи със стойност 24 212, -1 357 674, 1 357 674, -1 357
674 000, 3 657 895 000.

Изведете всяка променлива на екрана със printf()
*/
int main(){
    unsigned short usValue = 24212;
    printf("usValue = %d\n", usValue);
    
    int iValue = -1357674;
    printf("iValue = %d\n", iValue);
    
    int iValueOne = 1357674;
    printf("iValueOne = %d\n", iValueOne);
    
    int iValueTwo = -1357674000;
    printf("iValueTwo = %d\n", iValueTwo);
    
    unsigned int uiValue = 3657895000;
    printf("uiValue = %u\n", uiValue);

    
    retururn 0;
}
