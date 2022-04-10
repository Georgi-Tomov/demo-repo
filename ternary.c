#include <stdio.h>

int findMax(int x, int y);

int main()
{
    int max = findMax(5, 4);

    printf("%d\n", max);
    
    
    return 0;
}

int findMax(int x, int y)
{
    return x > y ? x : y;
}
