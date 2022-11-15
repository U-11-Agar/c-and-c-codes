#include <stdio.h>
int main()
{
    int number, demo, x, y;
    printf("hello\nenter the number\n");
    scanf("%d", &number);
    for (demo = 2; demo < number; demo++)
    {
        x = demo * demo * demo;

        if (number % x == 0)
        {
            printf("%d is divisible by the perfect cube %d\n", number, x);
            y = 0;
            break;
        }
        else
        {
            y = 1;
            continue;
        }
    }
    if (y == 1)
    {

        printf("the %d is not divisible by any perfect cuber expect 1\n", number);
    }

    printf("thank you");
    return 0;
}