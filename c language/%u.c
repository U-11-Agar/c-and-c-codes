#include <stdio.h>
int main()
{
    int s,u,e;
    printf("enter any value");
    scanf("%d", &s);
    for (e = 0; e < s; e++)
    {
        printf("the value of the loop is %d and u thing is %u", e+1, &u);
    }
    return 0;
}