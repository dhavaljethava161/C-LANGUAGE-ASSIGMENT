#include <stdio.h>
int main()
{
    int i, j, n=1, k = 4;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < k; j++)
        {
            printf(" ");
        }
        k--;
        for (j = 0; j < n; j++)
        {
            printf("*");
        }
        n=n+2;
        printf("\n");
    }

    return 0;
}
/*
    *
   ***
  *****
 *******
*********
*/