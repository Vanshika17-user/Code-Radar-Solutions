#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    // Input two numbers and an operator
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Perform operation based on operator
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
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}