#include <stdio.h>
#include <string.h>
int main(){
    char string1[] = "FName";
    char string2[] = "LName";
    
    strlwr(string1);
    strupr(string1);
    
    strcat(string1, string2);
    strncat(string1, string2, 1);
    
    strcpy(string1, string2);
    strncpy(string1, string2, 1);
    strset(string1, '?');
    strnset(string1, 'x', 1);
    
    strrev(string1);
    printf("%s\n", string1);
    
    return 0;
}
