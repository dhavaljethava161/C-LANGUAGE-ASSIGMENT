#include <stdio.h>
int main()
{
    char i, j;

    for (i = 'A'; i < 'G'; i++)
    {
        for (j = 'A'; j < i; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }

    return 0;
}   

/*
A
A B
A B C
A B C D
A B C D E
*/