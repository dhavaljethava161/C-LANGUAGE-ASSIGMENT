#include <stdio.h>
int main()
{
    int i, j, k = 'A';

    for (i = 'A'; i < 'F'; i++)
    {
        for (j = 'A'; j <= i; j++)
        {
            printf("%c ", k++);
        }
        printf("\n");
    }

    return 0;
}
/*
A
B C
D E F
G H I J
K L M N O
*/