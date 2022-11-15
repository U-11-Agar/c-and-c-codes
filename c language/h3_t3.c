#include <stdio.h>
int main()
{
    int demo, n, x[1000];
    printf("enter the number of digit of the fibonacci series u want to get printed\n");
    scanf("%d", &n);
    if (n > 3)
    {
        x[0] = 0;
        x[1] = 1;
        printf("the %d digit of the fibonacci series are %d,%d,", n, x[0], x[1]);
        for (demo = 0; demo < n - 2; demo++)
        {
            x[demo + 2] = x[demo + 1] + x[demo];
            printf("%d,", x[demo + 2]);
        }
    }
    else
    {
        printf("enter number greater then 3");
    }
    printf("\nthank you");
    return 0;
}