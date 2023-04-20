#include <stdio.h>
int main()
{
    int n, k, i, j;
    n = 11;
    k = 1;
    for (i = 0; i < n; i++)
    {
        if (i < (n / 2))
        {
            for (int j = 0; j < k; j++)
            {
                printf("* ");
            }
            k++;
        }
        else
        {
            for (int j = 0; j < k; j++)
            {
                printf("* ");
            }
            k--;
        }
        printf("\n");
    }

    return 0;
}
/*

*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*

*/