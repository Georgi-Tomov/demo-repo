#include <stdio.h>

int main(){
    float fMoonGravity = 0.17; // Gravity on the Moon is 17% from Earth's gravity
    float fKilogramsOnEarth = 0.0;
    printf("Please enter your weight on Earth: \n");
    scanf("%f", &fKilogramsOnEarth);

    // Converts KG on Earth to KG on the Moon
    float fKilogramsOnMoon = fKilogramsOnEarth * fMoonGravity;
    printf("%.2fKG will be your weight on the Moon.\n", fKilogramsOnMoon);

    return 0;
}