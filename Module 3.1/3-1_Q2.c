#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Enter any two value: ");
    scanf("%d %d", &num1, &num2);

    printf("Addition : %d+%d=%d\n", num1, num2, num1 + num2);
    printf("Substraction : %d-%d= %d\n", num1, num2, num1 - num2);
    printf("Multiplication : %d*%d= %d\n", num1, num2, num1 * num2);
    printf("Division : %d/%d= %d\n", num1, num2, num1 / num2);
    printf("Modulo : %d '/. %d= %d\n", num1, num2, num1 % num2);

    return 0;
}