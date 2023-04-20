#include <stdio.h>
int main()
{
    int i, j;
    for (int i = 1; i < 7; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("%d ", j % 2);
        }
        printf("\n");
    }

    return 0;
}
// we are printing module in this program
/*

1
1 0
1 0 1
1 0 1 0
1 0 1 0 1

*/