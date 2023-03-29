#include <stdio.h>
int main()
{
    int amount;
    float interest_rate, interest;

    printf("Enter amount: ");
    scanf("%d", &amount);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    interest = (amount * interest_rate) / 100;

    printf("Interest for amount of %d is %.3f by interest rate of %.2f percent", amount, interest, interest_rate);

    return 0;
}