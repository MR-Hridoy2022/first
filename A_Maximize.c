#include <stdio.h>

// Function to find the greatest divisor of x that is less than x
int findLargestDivisor(int x) {
    for (int i = x - 1; i >= 1; i--) {
        if (x % i == 0) {
            return i;
        }
    }
    return 1; // Default to 1 if no divisor found
}

int main() {
    int t;
    scanf("%d", &t); // Number of test cases

    // Iterate through each test case
    while (t--) {
        int x;
        scanf("%d", &x); // Value of x for the current test case

        // Find the largest divisor of x that is less than x
        int y = findLargestDivisor(x);

        // Output y for the current test case
        printf("%d\n", y);
    }

    return 0;
}
