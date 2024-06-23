// sum of two number using scanf

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two integer number: ");
    scanf("%d %d", &num1, &num2);

    // printf("Enter second integer: ");
    // scanf("%d", &num2);

    printf("Integer of number: %d %d", num1, num2);

    // initialize of value
    int sum, multiply, divider;
    sum = num1 + num2;
    multiply = num1 * num2;
    divider = num1 / num2;

    printf("\nSum: %d %d %d", sum, multiply, divider);

    return 0;
}