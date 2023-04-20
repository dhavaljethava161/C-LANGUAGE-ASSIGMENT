#include <stdio.h>
int main()
{
    // How many odd numbers are there
    int a, sum = 0;
    for (a = 0; a <= 10; a++)
    {
        if (a % 2 == 0)
        {
            printf("%d\n", a);
        }
    }
   
    return 0;
}