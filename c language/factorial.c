#include <stdio.h>
int factorial(int z);
int main(void)
{
    int z, x;
    printf("enter the number");
    scanf("%d", &z);
    if (z < 0)
    {
        printf("error");
    }
    else
    {
        x = factorial(z);
        printf("\n%d", x);
    }
    return 0;
}
int factorial(int z)
{
    int x;
    if (z = 0)
    {
        return 1;
    }
    x = z * factorial(z - 1);
    return x;
}