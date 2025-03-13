#include <stdio.h>
int main() {
    int num1, num2;
    char operator;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf(" %c", &operator);
    switch (operator) {
        case '+':
            printf("%.2f\n", (float)num1 + num2);
            break;
        case '-':
            printf("%.2f\n", (float)num1 - num2);
            break;
        case '*':
            printf("%.2f\n", (float)num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2f\n", (float)num1 / num2);
            } else {
                printf("error\n");
            }
            break;
        default:
            printf("error.\n");
    }
    return 0;
}