#include <stdio.h>
long int returnint(long int n)
{
    long int z;
    if (n == 1)
    {
        z = 1;
    }
    else
    {
        z = 1 + returnint(n - 1);
    }
    printf("%ld \n", z);
    return z;
}
int main()
{
    long int n, x;
    printf("give the number of digit u want to see printed\n");
    scanf("%ld", &n);
    x = returnint(n);
    return 0;
}