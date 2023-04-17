#include <stdio.h>
/* 
6. Дефинирайте променливи със стойност -127, 255, 63 498, 4 294 967 292, -9 000
000 000 000 775 845.

Изведете всяка променлива на екрана със printf()
*/

int main()
{
    signed char scValue = -127;
    printf("scValue = %d\n",scValue);
    
    unsigned char ucValue = 255;
    printf("ucValue = %d\n",ucValue);
    unsigned short usValue = 63498;
    printf("usValue = %d\n",usValue);
    unsigned int uiValue  = 4294967292;
    printf("uiValue = %u\n", uiValue);
    
    signed long long sllValue = -9000000000000775845;
    printf("sllValue = %lld\n", sllValue);
    
    return 0;}
