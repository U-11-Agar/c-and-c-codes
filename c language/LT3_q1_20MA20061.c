#include <stdio.h>
void jumble(int a, int z);
void print1(int z);
void print0(int z);
int main(void)
{
    int n, z;
    printf("enter positive integers n,r such that r<=n: ");
    scanf("%d%d", &n, &z);
    for (int a = z; a <= n; a++)
    {
        jumble(a, z);
    }
    return 0;
}
void jumble(int a, int z)
{
    int demo1, x = 2;
    printf("\n");
    if (a == z)
    {
        for (demo1 = 0; demo1 < z; demo1++)
        {
            printf("1");
        }
        return;
    }
    while (x % 10 != 1)
    {
        printf("\n");
        for (demo1 = 1; demo1 <= a; demo1++)
        {
            printf("1");
            z=z-1;
            for(int p=1;p<=(a-z);p++)
            {
                print0(p);
            }
            for(int v=1;v<=z;v++)
            {
                print1(v);
            }

        }
    }
}
void print1(int z)
{
    if (z == 0)
    {
        return;
    }

    printf("1");
}
void print0(int q)
{
    if (q == 0)
    {
        return;
    }
    printf("0");
}