#include <stdio.h>
int main()
{
    // WAP to print number in reverse order e.g.: number = 64728 ---> reverse =82746

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