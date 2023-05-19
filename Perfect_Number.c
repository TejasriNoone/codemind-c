#include <stdio.h>
#include <stdbool.h>

bool isPerfectNumber(int n) {
    if (n <= 0) {
        return false;
    }

    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return (sum == n);
}

int main() {
    int n;

    scanf("%d", &n);

    if (isPerfectNumber(n)) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
