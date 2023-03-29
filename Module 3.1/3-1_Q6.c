#include <stdio.h>
int main()
{
    int days;
    float year;

    printf("Enter days: ");
    scanf("%d", &days);

    year = (float)days / 365;

    printf("%.1f years\n", year);

    printf("Enter year: ");
    scanf("%f", &year);

    days = year * 365;
    printf("%d days", days);

    return 0;
}