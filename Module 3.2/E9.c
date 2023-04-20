#include <stdio.h>
int main()
{
    // WAP to print Fibonacci series up to given numbers
    int a = 0, b = 1, n = 10, temp;

    // printf("Enter number: ");
    // scanf("%d", &n);
    if(n==0)
    {
        printf("%d",a);
    }
    else if (n == 1)
    {
        printf("%d", a);
    }
    else
    {
        printf("%d\n%d\n", a, b);

        for (int i = 0; i < n - 2; i++)
        {
            temp = a + b;

            printf("%d\n", temp);
            a = b;
            b = temp;
        }
    }

    // printf("%d\n", sum);

    return 0;
}