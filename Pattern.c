#include <stdio.h>

void printPattern(int n) {
    int i, j;

    // Iterate from 1 to n
    for (i = 1; i <= n; i++) {
        // Print n number of digits
        for (j = 1; j <= n; j++) {
            printf("%d ", i);
        }
        printf("
"); // Move to the next line after printing the digits
    }
}

int main() {
    int n;

    scanf("%d", &n);

    // Call the function to print the pattern
    printPattern(n);

    return 0;
}
