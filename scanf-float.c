// sum of two number using scanf

#include <stdio.h>

int main() {
    // declare variable
    float num1, num2;
    printf("Enter two Float number: ");
    scanf("%f %f", &num1, &num2);

    // printf("Enter second float: ");
    // scanf("%f", &num2);

    printf("Float of number: %.1f %.1f", num1, num2);

    float sum;
    sum = num1 + num2;
    

    printf("\nSum: %f", sum);

    return 0;
}