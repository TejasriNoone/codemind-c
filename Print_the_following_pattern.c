#include <stdio.h>

void printPattern(int N) {
    int i, j;

    for (i = 1; i <= N; i++) {
        // Print the numbers from i to N
        for (j = i; j <= N; j++) {
            printf("%d ", j);
        }
        printf("
");
    }
}

int main() {
    int N;

   
    scanf("%d", &N);

    // Call the function to print the pattern
    printPattern(N);

    return 0;
}
