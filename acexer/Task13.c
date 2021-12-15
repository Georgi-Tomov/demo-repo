#include <stdio.h>
/*
Упражнение 13. Напишете програма, която изчислява броя на секундите в една
година.
*/
int main(){
    int iOneMinute = 60;// 60 seconds in one minute
    int iOneHour = 60 * iOneMinute;// seconds in one hour
    int iOneDay = 24 * iOneHour;// seconds in one day
    int dOneYear = 365.25 * iOneDay;// seconds in one year including the leap part

    printf("Total seconds in one year: %d\n", dOneYear);

    return 0;
}