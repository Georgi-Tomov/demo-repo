#include <stdio.h>

int main(){
    char grade;
    
    printf("Enter grade: \n");
    scanf("%c",&grade);

    switch(grade)
    {
        case 'A':
            printf("Perfect!\n");
            break;
            
        case 'B':
            printf("You did good!\n");
            break;
        case 'C':
            printf("You did OK!\n");
            break;
        case 'D':
            printf("At least it's not an F!\n");
            break;
        case 'F':
            printf("You Failed!\n");
            break;
        default:
            printf("Enter valid grade: \n");
            break;
    }
    
    return 0;
}
