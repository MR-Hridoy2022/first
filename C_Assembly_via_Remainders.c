#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); // Number of test cases

    while (t--) {
        int n;
        scanf("%d", &n); // Number of elements in array a

        int x[n-1];
        for (int i = 0; i < n-1; i++) {
            scanf("%d", &x[i]); // Elements x2 to xn
        }

        int a[n]; // Array a
        a[n-1] = x[n-2]; // Last element of a is given as xn

        // Calculate each preceding element of a
        for (int i = n - 2; i > 0; i--) {
            a[i] = x[i-1] + a[i+1];
        }

        // Calculate the first element of a separately
        a[0] = x[0] + a[1];

        // Output array a
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    return 0;
}
