#include <stdio.h>
void numberofsteps(int z);
void step1(int z);
void step2(int z);
void step3(int z);
int c = 0;
void numberofsteps(int z)
{

    step1(z);
    printf("\n");
    step2(z);
    printf("\n");
    step3(z);
}
void step1(int z)
{
    if ((z - 1) < 0)
    {
        printf("");
    }
    else
    {
        printf("1");
        step1(z - 1);
        step2(z - 1);
        step3(z - 1);
        c += 1;
    }
}
void step2(int z)
{

    if ((z - 2) <0)
    {
        printf("");
    }

    else
    {
        printf("2");
        step1(z - 2);
        step2(z - 2);
        step3(z - 2);
        c += 1;
    }
}
void step3(int z)
{

    if ((z - 3) < 0)
    {
        printf("");
    }
    else
    {
        printf("3");
        step1(z - 3);
        step2(z - 3);
        step3(z - 3);
        c += 1;
    }
}
int main()
{
    int n;
    printf("give the total number of steps that the frog have to cover -\n");
    scanf("%d", &n);
    numberofsteps(n);
    printf("\n%d\nthank you\n", c);
    return 0;
}