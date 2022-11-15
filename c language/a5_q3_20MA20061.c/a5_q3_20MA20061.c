#include <stdio.h>
#include <string.h>
int reminder(int k, int b[], int z);
void q(int z, char a[]);
int main()
{
    char a[200];
    int z;
    printf("enter number\n");
    scanf("%s", a);
    printf("enter the divisor\n");
    scanf("%d", &z);
    q(z, a);
    return 0;
}
void q(int z, char a[])
{
    int t;
    int x;
    int b[200];
    x = strlen(a);
    for (t = 0; t < x; t++)
    {
        b[t] = a[t] - '0';
    }
    printf("quotient-");
    x = 0;
    while (a[x] != '\0')
    {
        t = ((reminder(x - 1, b, z) * 10) + b[x]) / z;
        printf("%d", t);
        x += 1;
    }
    t = reminder(x - 1, b, z);
    printf("\nRemainder- %d", t);
}
int reminder(int k, int b[], int z)
{
    int f;
    if (k < 0)
    {
        f = 0;
    }
    else
    {
        f = ((reminder(k - 1, b, z) * 10) + b[k]) % z;
    }
    return f;
}
