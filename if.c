#include <stdio.h>

int main()
{
    int age;
    
    printf("\nEnter your age: ");1
    scanf("%d",&age);

    if(age >= 18)
    {
        printf("\nYou are signed up!\n");
    }
        
    else if(age == 0)
    {
        printf("\nYou are just born.!\n");
    }
        
    else if(age < 0)
    {
        printf("\nEnter valid age next time\n");
    }
    else
    {
        printf("\nYou are not signed up!\n");
    }
    return 0;
}
