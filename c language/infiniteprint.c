#include <stdio.h>
int main(void)
{
    long long int a = 1;
    while (1)
    {
        a *= 9999;
        printf("%lld \n", a);
    }
    return 0;
}