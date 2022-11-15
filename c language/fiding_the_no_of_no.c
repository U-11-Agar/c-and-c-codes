
#include <stdio.h>
int main()
{
    int x, n, w;
    printf("the no u want\n");
    scanf("%d", &x);
    n = 1;
    while (x / (n) != 0)
    {
        n = n * 10;}
        switch (n)
        {
        case 1000:
            w = 3;
            break;
        case 10000:
            w = 4;
            break;
        case 100000:
            w = 5;
            break;
        case 1000000:
            w = 6;
            break;
        case 10000000:
            w = 7;
            break;
        case 100000000:
            w = 8;
            break;
        };

        printf("%d", w);

        return 0;
    }