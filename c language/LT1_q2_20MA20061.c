#include <stdio.h>
int main()
{
    int demo,z=1;
    float number, y, x;
    printf("hello\nenter the number that is x(0)\n");
    scanf("%f", &number);
    y = number;
    for (demo = 0; z != 0; demo++)
    {
        x = y;
        y = (2 * y) / 3 + (number / (3 * y * y));
        printf("x(%d)=%f,x(%d)=%f\n", demo, x, demo + 1, y);
        if ((x - y) < 0.01)
        {
            z=0;
        }
        else
        {
            z=1;
        }
    }
    printf("thank you");
    return 0;
}