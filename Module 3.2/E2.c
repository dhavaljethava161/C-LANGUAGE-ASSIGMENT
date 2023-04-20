#include <stdio.h>
int main()
// take 10 no. Input from user and find out ...
{
    int a;
    printf("print value of a: ");
    scanf("%d", &a);

    while (a != 10)
    {
        printf("Please enter correct value of a: ");
        scanf("%d", &a);
    }

    return 0;
}