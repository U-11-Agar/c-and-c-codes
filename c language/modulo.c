#include <stdio.h>
int main(void)
{
    int a;
    printf("give the number");
    scanf("%d", &a);
    printf("\n%d", a % 1000000007);
    return 0;
}