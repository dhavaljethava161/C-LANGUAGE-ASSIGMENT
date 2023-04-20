#include <stdio.h>
int main()
{
    int i, sum = 1, n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        sum = sum * i;
        printf("%d\n", sum);
    }

    printf("Final Factorial: %d\n", sum);

    return 0;
}