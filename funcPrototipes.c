#include <stdio.h>
void hello(char[], int);

int main()
{
    char name[] = "George";
    int age = 12;
    hello(name, age);

    return 0;
    
}

void hello(char *name, int age)
{
    printf("Hello %s\n", name);
    printf("Your age is %d\n", age);
}
