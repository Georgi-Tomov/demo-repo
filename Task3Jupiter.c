#include <stdio.h>

int main(){
    // 12 years on Earth = 4380 regular days + 3 leap years days
    float fOneJupiterYearInEarthDays = 4383.0;
    float fDaysOnEarth = 0.0;
    printf("Please enter how many Earth days do you want to convert in: \n");
    scanf("%f", &fDaysOnEarth);
    //Converts the days in Jupiter years
    float fJupiterYears = fDaysOnEarth / fOneJupiterYearInEarthDays;
    printf("The days you entered are %.2f years on Jupiter.\n", fJupiterYears);
    return 0;
}