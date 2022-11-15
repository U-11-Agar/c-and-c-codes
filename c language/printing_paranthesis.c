#include <stdio.h>
void paranthasis(int n);
int main(void)
{
    int n;
    printf("how many paranthasis u want to get printed (n)=");
    scanf("%d", &n);
    paranthasis(n);
    printf("\nthank you");
    return 0;
}
void paranthasis(int n)
{
    int z;
    for (z = 1; z <= n; z++)
    {
        printf("{}");
    }
    printf("\n");
    for (z = 1; z <= 2 * n; z++)
    {
        if (z <= n)
        {
            printf("{");
        }
        else
        {
            printf("}");
        }
    }
}