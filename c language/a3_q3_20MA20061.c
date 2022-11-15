#include <stdio.h>
int main()
{
    int nfc, x, x1, x2, y2, y1, y, demo;
    printf("enter the no of points\n");
    scanf("%d", &nfc);
    x1 = x2 = y1 = y2 = 0;
    for (demo = 0; demo < nfc; demo++)
    {
        printf("enter the x coordinate of point %d\n", demo + 1);
        scanf("%d", &x);
        printf("enter the y coordinate of point %d\n", demo + 1);
        scanf("%d", &y);
        if (x > x1)
        {
            x1 = x;
        }
        if (x < x2)
        {
            x2 = x;
        }
        if (y > y1)
        {
            y1 = y;
        }
        if (y < y2)
        {
            y2 = y;
        }
    }
    printf("the bottom left coordinate of the rectangle is (%d,%d)\n", x2, y2);
    printf("the top right coordinate of the rectangle is (%d,%d)\n Thank you", x1, y1);
}