#include <stdio.h>
#include <stdlib.h>

#define max 1000

int set(int n)
{
    if (n == 0)
        return 0;
    return set(n / 2) + (n % 2);
}

int main(void)
{
    int n, k;
    printf("give the no of element in the array: ");
    scanf("%d", &n);
    printf("give the value of K: ");
    scanf("%d", &k);
    int a[max] = {0};
    int g;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &g);
        a[set(g)]+=1;
    }
    int count = 0;
    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < max; j++)
        {
            if (i + j >= k)
            {
                if (i == j)
                {
                    count += (a[i] * (a[i] - 1)) / 2;
                }
                else
                    count += a[i] * a[j];
            }
        }
    }
    printf("%d\n", count-1);
    return 0;
}
