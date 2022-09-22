#include <stdio.h>

double square(double x);

int main(){
    double x = square(3.14);
    
    printf("%lf\n", x);

    return 0;
}

double square(double x)
{  
    return x * x;
}
