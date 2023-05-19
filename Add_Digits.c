#include <stdio.h>

int addDigits(int num) {
    while (num >= 10) {
        int sum = 0;
        char strNum[11];
        sprintf(strNum, "%d", num);

        for (int i = 0; strNum[i] != NULL; i++) {
            sum += strNum[i] - '0';
        }

        num = sum;
    }

    return num;
}

int main() {
    int num;

   
    scanf("%d", &num);

    int result = addDigits(num);
    printf("%d
", result);

    return 0;
}
