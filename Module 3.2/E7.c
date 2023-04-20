#include <stdio.h>
int main()
{
    // print table up to given numbers
    int a, b, c;
    printf("Enter number for table: ");
    scanf("%d", &b);
    printf("Enter number of number to end: ");
    scanf("%d", &c);
    for (a = 1; a <= c; a++)
    {
        printf("%d*%d = %d\n", b, a, a * b);
    }

    return 0;
}