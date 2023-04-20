#include <stdio.h>
int main()
{
    int a;
    for (a = 64728; a <= 82746; a++)
    {
        // sum=sum+a;
        printf("%d\n", a);
    }
    for (a = 82746; a >= 64728; --a)
    {
        // sum=sum+a;
        printf("%d\n", a);
    }

    return 0;
}