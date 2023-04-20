#include <stdio.h>
int main()
// swap two numbers without using third variable
{
    int num, num2;
    printf("Enter two numbers:\n");
    scanf("%d %d", &num, &num2);

    num = num + num2;
    num2 = num - num2;
    num = num - num2;

    printf("number1 is %d\n", num);

    printf("number2 is %d\n", num2);

    return 0;
}