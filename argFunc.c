#include <stdio.h>


void birthday(char name[], int age)
{
    printf("%s Happy birthday \n", name);
    printf("%d is your age \n", age);
}


int main()
{
    char name[] = "test";
    int age = 21;

    birthday(name, age);

    return 0;
}
