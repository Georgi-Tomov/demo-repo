#include <stdio.h>
void bin(unsigned n){
    unsigned i;
    for (i=1 << 7; i > 0; i >>1){
        (n & i) ? printf("1") : printf("0");
    }

    printf("\n");
}
int main(){
    bin(255);
    bin(255 + 10);
    // x = sizeof(int);
    //float x = sizeof(float);
    //char a = sizeof(char);
    //unsigned char a = 255;
    //unsigned char s = a + 10;

    //printf("sizeof int = %d\n", a);
    return 0;
}