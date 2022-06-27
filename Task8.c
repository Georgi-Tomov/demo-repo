#include <stdio.h>
/*
8. Да прочетем какво се случва със стойността на променливата x:
char x = 8;
x = x - 2;
x= x + 6;
x= x – 10 + 2;
Каква ще бъде стойността на x, ако я отпечатаме на екрана след последната
калкулация?
*/
int main()
{
    char x = 8;
    printf("x: %d\n", x);
    
    x = x -2;
    printf("x: %d\n", x);
    
    x= x+ 6;
    printf("x: %d\n", x);
    
    x= x - 10 + 2;// " – " <------ Error symbol Fixed with "-"
    printf("x: %d\n", x);
    
    return 0;
}
