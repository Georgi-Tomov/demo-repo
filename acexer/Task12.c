#include <stdio.h>
/*
12. Напишете програма PrintPatterns, която отпечата следните текстови графики
на екрана. Графиките една под друга:
*/
int main(){
    int N = 6;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("  ");
        }
        for (int j = i; j < N; j++) {
            printf("# ");
        }
        for (int j = i; j <= N; j++) {
            printf("# ");
        }
        printf("\n");
    }
    printf("\n");

    int n = 6;
    for (int i = 1; i <= n; i++) {
        for(int j = i; j <= n; j++) {
            printf("  ");
        }
        for (int j = 1; j < i; j++) {
            printf("# ");
        }
        for (int j = 1; j <= i; j++) {
            printf("# ");
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            printf("  ");
        }
        for (int j = 1; j < i; j++) {
            printf("# ");
        }
        for (int j = 1; j <= i; j++) {
            printf("# ");
        }
        printf("\n");
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("  ");
        }
        for (int j = i; j < n; j++) {
            printf("# ");
        }
        for (int j = i; j <= n; j++) {
            printf("# ");
        }
        printf("\n");
    }
        return 0;
}