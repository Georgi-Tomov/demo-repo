#include <stdio.h>

int main(){
    float fOneCupVolume = 8.0;// 8 ounces = 1 cup
    float fDesiredOunces = 0.0;// Desired ounces from the customer

    printf("Enter the desired ounces: \n");
    scanf("%f", &fDesiredOunces);
    float fTotalCups = fDesiredOunces / fOneCupVolume;// Calculate how many cups it fills up
    printf("Your desired ounces can fill up %.2f cups.\n", fTotalCups);
    return 0;
}