#include <stdio.h>
int main()
{
    // How many odd numbers are there
    int a;
    for (a = 0; a <= 30; a++)
    {
        if (a % 2 != 0)
        {
            printf("%d\n", a);
        }
    }

    return 0;
}