#include <stdio.h>
#include <string.h>
int sum(char s[]);
int main()
{
    int n = 11, a;
    char s[100];
    printf("enter the number: ");
    scanf("%s", s);
    printf("enter the number to which the sum should be equal: ");
    scanf("%d", &a);
    while (n / 10 != 0)
    {
        n = sum(s);
    }
    if (n == a)
    {
        printf("the number satisfy the given codition");
    }
    else
    {
        printf("the number does not satisfy the given condition");
    }
    return 0;
}
int sum(char s[])
{
    int n, x = 0;
    n = strlen(s);
    for (int z = 0; z < n; z++)
    {
        x += s[z] - '0';
    }
    int y = 1, d, z, e;
    while (x / y != 0)
    {
        y *= 10;
    }
    y /= 10;
    for (d = 0, e = 0, z = 0; e != x; y /= 10, z++)
    {
        d = (x - e) / y;
        e += d * y;
        s[z] = d + '0';
    }
    for (d = n - 1; d > z - 1; d--)
    {
        s[d] -= s[d];
    }
    /*printf("\n%s\n", s);*/
    return x;
}