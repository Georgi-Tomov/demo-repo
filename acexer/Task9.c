#include <stdio.h>
#include <float.h>
/*
9. Дефинирайте променливи със стойност
 4.9876543, 7.123456789012345678890, 18 398 458 438 583 853.28, 18 398 458 438
583 853.39875937284928422.
Изведете всяка променлива на екрана с printf()
*/
int main(){
    double ddValue = 4.9876543;
    printf("ddValue = %.7Lf\n", ddValue);

    double dValue = 7.123456789012345678890;
    printf("dValue = %.20lf\n", dValue);

    double dValueOne = 18398458438583853.28;
    printf("dValueOne = %.2lf\n", dValueOne);

    double dValueTwo = 853.39875937284928422;
    printf("dValueTwo = %.17lf\n", dValueTwo);

    return 0;
}