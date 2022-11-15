#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a, b, s;
    s = a = b = 0;
    while ((a < n) || (b < n))
    {
        if (a <= b)
            ++a;
        else
            ++b;
        s += b;
    }
    printf("%d",s);
    return 0;
}
