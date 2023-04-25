#include <stdio.h>
int main()
{
    int num, count = 0, rem,rev_num;
    printf("Enter value: ");
    scanf("%d", &num);
    rev_num=num;
    while (num > 0)
    {
        num = num / 10;
        count = count + 1;
    }

    printf("number of digits is %d\n", count);

    for (int i = 0; i <= count; i++)
    {
        if (rev_num > 0)
        {
            rem = rev_num % 10;
            printf("  reverse number of %d is %d", rev_num, rem);
        }
        rev_num = rev_num / 10;
    }

    return 0;
}