#include <stdio.h>
int main()
{
    // Sum of odd numbers
    int a, sum = 0;
    for (a = 0; a <= 10; a++)
    {
        if (a % 2 != 0)
        {
            sum = sum + a;
        }
    }
    printf("%d\n", sum);
    return 0;
}