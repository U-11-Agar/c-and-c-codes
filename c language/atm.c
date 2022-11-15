#include <stdio.h>
void transitionprocess(int ammount, double balance);
int main(void)
{
    int transitionammount;
    double accountbalance;
    printf("enter the ammount of money do u want to withdraw\n");
    scanf("%d", &transitionammount);
    printf("enter ur previous account balance\n");
    scanf("%lf", &accountbalance);
    if (accountbalance >= transitionammount)
    {
        transitionprocess(transitionammount, accountbalance);
    }
    else
    {
        printf("insufficient balance\n");
    }
    return 0;
}
void transitionprocess(int ammount, double balance)
{
    if ((ammount % 5) == 0)
    {
        printf("final account balance is %lf", balance - ammount - 0.5);
    }
    else
    {
        printf("plz enter the ammount sd=s a multiple of 5 account balance is %lf", balance);
    }
    return;
}