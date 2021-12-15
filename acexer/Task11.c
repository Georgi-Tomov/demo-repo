#include <stdio.h>
/*
11. Създайте С програма, която калкулира стойността на покупки в магазин за
хранителни стоки. Клиентът може да закупи различна комбинация от продукти. В
магазина има следните налични продукти и цени:
Домати- 4.5 лв.за килограм, Брашно 1.80 лв. за килограм,
Кисело мляко - 0.50 лв. за брой, Сладолед на фунийки 0.60 лв. броя
Бонбони 1.50 лв. за килограм, Близалки 0.15 лв. за брой.
*/

int main(){
    double dTomatoesKG = 4.50;
    double dTomatoesQuantity = 1.00;
    double dFlourKG = 1.80;
    double dFlourQuantity = 0.00;
    double dYoghurt = 0.50;
    double dYoghurtQuantity = 0.00;
    double dFunnelIceCream = 0.60;
    double dFunnelIceCreamQuantity = 0.00;
    double dCandyKG = 1.50;
    double dCandyQuantity = 0.00;
    double dLollipopOne = 0.15;
    double dLollipopQuantity = 0.00;

    double dTotalMoneyDue = 0.00;

    printf("How many KG of Tomatoes do you want: \n");
    scanf("%lf", &dTomatoesQuantity);
    if(dTomatoesQuantity != 0){
        dTotalMoneyDue += (dTomatoesKG * dTomatoesQuantity);
    }

    printf("How many KG of Flour do you want: \n");
    scanf("%lf", &dFlourQuantity);
    if(dFlourQuantity != 0){
        dTotalMoneyDue += (dFlourKG * dFlourQuantity);
    }

    printf("How many youghurts do you want: \n");
    scanf("%lf", &dYoghurtQuantity);
    if(dYoghurtQuantity != 0){
        dTotalMoneyDue += (dYoghurt * dYoghurtQuantity);
    }

    printf("How many cone ice creams do you want: \n");
    scanf("%lf", &dFunnelIceCreamQuantity);
    if(dFunnelIceCreamQuantity != 0){
        dTotalMoneyDue += (dFunnelIceCream * dFunnelIceCreamQuantity);
    }

    printf("How many KG of Candies do you want: \n");
    scanf("%lf", &dCandyQuantity);
    if(dCandyQuantity != 0){
        dTotalMoneyDue += (dCandyKG * dCandyQuantity);
    }

    printf("How many lollipops do you want: \n");
    scanf("%lf", &dLollipopQuantity);
    if(dLollipopQuantity != 0){
        dTotalMoneyDue += (dLollipopOne * dLollipopQuantity);
    }


    printf("Total is %.2flv\n", dTotalMoneyDue);

    return 0;
}

