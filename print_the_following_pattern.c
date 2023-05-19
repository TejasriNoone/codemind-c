#include <stdio.h>

void printPattern(int numLines) {
    int i, j;
    char startChar = 'A';
    char lastChar = startChar + numLines - 1;

    for (i = 0; i < numLines; i++) {
        for (j = 0; j < numLines; j++) {
            printf("%c ", startChar + i);
        }
        printf("
");
    }
}

int main() {
    int numLines;


    scanf("%d", &numLines);

    // Call the function to print the pattern
    printPattern(numLines);

    return 0;
}
