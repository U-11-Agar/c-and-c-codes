#include <stdio.h>
int main()
{
    int n, q, w, e;
    printf("give the value of the no\n");
    scanf("%d", &n);
    printf("the number of number which is divisible by only four(4) and not with 6 and 10\n");
    q = n / 4 - n / 12 - n / 20;
    printf("%d\n", q);
    printf("the number of number which is divisible by only six(6) and not with 4 and 10\n");
    w = n / 6 - n / 12 - n / 30;
    printf("%d\n", w);
    printf("the number of number which is divisible by only ten(10) and not with 6 and 4\n");
    e = n / 10 - n / 20 - n / 30;
    printf("%d\n", e);
    return 0;
}