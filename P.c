#include <stdio.h>

int main() {
    int n, m, i, j, b;
    while (1) {
        scanf("%d", &n); 
        scanf("%d", &m);  
        if ((1 <= n && n <= 100) && (1 <= m && m <= 100)) 
            break;
        else
            printf(" Invalid Input  \n");
    }
    for (i = 1; i <= n; i++) {
        for (j = n - i; j > 0; j--) {
            printf(" ");
        }
        for (b = 1; b <= i; b++) {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 1; i <= m; i++) {
        printf(" ");
        for (j = n - 3; j > 0; j--) {
            printf(" ");
        }
        for (b = 2; b > 0; b--) {
            printf("* ");
        }
        printf("\n");
    }
     
    return 0;
}
