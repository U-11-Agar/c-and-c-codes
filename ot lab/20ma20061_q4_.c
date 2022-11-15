#include <stdio.h>
long int x;
int n;
void decider();
void even();
void odd();
int main(void)
{
    printf(" hello babuwolf this is the code for q4\n");
    printf("give the input x and n\n");
    scanf("%ld%d", &x, &n);
    decider(x, n);
    printf("your answer is %ld\n", x);
    return 0;
}
void decider()
{
    if (n == 1)
    {
        return;
    }
    if (n % 2 == 0)
    {
        even();
    }
    else
    {
        odd();
    }
}
void even()
{

    x *= x;
    n /= 2;
    decider();
}
void odd()
{
    int demo = x;
    x *= (demo * demo);
    n /= 2;
    decider();
}