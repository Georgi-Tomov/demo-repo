#include <stdio.h>
void bin(unsigned n);
int main(void) {
    char x = -127;
    char y = 10;
    bin(x);
    printf("%d\n", x);
    x = x + y;
    printf("%d\n", x);
    return 0;
}
void bin(unsigned n){
    unsigned i;
    for (i=1 << 7; i > 0; i >>1){
        (n & i) ? printf("1") : printf("0");
    }

    printf("\n");
}