#include <math.h>
#include <stdio.h>

int main()
{
    float y, x;
    printf("give the number x and y\n");
    scanf("%f%f", &x, &y);
    printf("the value when x(%f) is divided by y(%f) is %lf\n", x, y, fmod(x,y));
    return 900;
} 