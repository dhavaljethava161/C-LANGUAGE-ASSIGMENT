#include <stdio.h>
int main()
//find number is even or odd using ternary operator
{
    int num;

    printf("Enter any number :");
    scanf("%d", &num);

    num % 2 == 0 ? printf("%d is even number", num) : printf("%d is odd number", num);

    return 0;
}