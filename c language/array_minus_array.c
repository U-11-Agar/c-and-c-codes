#include <stdio.h>
int main(void)
{
    int a, b[5];
    for (a = 0; a < 5; a++)
    {
        printf("hello");
        scanf("%d", &b[a]);
    }
    for (a = 0; a < 5; a++)
    {
        if (b[a] == b[a + 1])
        {
            b[a + 1] -=b[a] ;
        }
    }
    for (a = 0; a < 5; a++)
    {
        printf("%d", b[a]);
    }
    return 0;
}