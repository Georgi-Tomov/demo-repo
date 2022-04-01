#include <stdio.h>
#include <stdlib.h>
/*
10. Представете си, че имате фирма за отдаване на каравани и кемпери под
наем, за която трябва да разработите софтуер. Вие сте малка фирма и имате
общо 3 каравани на цена 90 лв. на ден и 3 кемпера на цена 100 лв. на ден.
Декларирайте променливи за броя на караваните, цената на караваните, броя на
кемперите и цената им. Направете меню, което пита клиента каравана или
кемпер ще иска. Направете променлива, в която да се събират парите, които
клиента дължи на компанията. Принтирайте резултата.
*/
void exit(int code);
double caravanDue(double dDailyPriceCaravan, int iRentDays, int iReserved);
double canperDue(double dDailyPriceCampers, int iRentDays, int iReserved);

int main()
{
    int iTotalCaravans = 3;
    int iTotalCampers = 3;
    int iReserved = 0;

    double dDailyPriceCaravan = 90.00;
    double dDailyPriceCampers = 100.00;
    int iRentDays = 0;

    double dMoneyDue = 0.00;

    int iChoiseVehicle = 0;
    printf("Please choose a vehicle: Enter 1 for caravans or 2 for campers\n");
    scanf("%d", &iChoiseVehicle);

    printf("For how many days would you like to rent it: \n");
    scanf("%d", &iRentDays);

    printf("How many vehicles would you like to use: \n");
    scanf("%d", &iReserved);

    if(iChoiseVehicle == 1) {
        iTotalCaravans -= iReserved;
        if(iTotalCaravans < 1){
            printf("Sorry, No more Caravans!");
            exit(1);
        }
        dMoneyDue = caravanDue(dDailyPriceCaravan, iRentDays, iReserved);
        printf("Total money due %.2flv\n", dMoneyDue);
    }else if(iChoiseVehicle == 2){
        iTotalCampers-= iReserved;
        if(iTotalCampers < 1){
            printf("Sorry, No moreCampers!");
            exit(1);
        }
        dMoneyDue = canperDue(dDailyPriceCampers, iRentDays, iReserved);
        printf("Total money due %.2flv\n", dMoneyDue);
    }


    return 0;
}

double caravanDue(double dDailyPriceCaravan, int iRentDays, int iReserved)
{
    return dDailyPriceCaravan * iRentDays * iReserved;
}

double canperDue(double dDailyPriceCampers , int iRentDays, int iReserved){
    return dDailyPriceCampers * iRentDays * iReserved;
}
void exit(int status);
