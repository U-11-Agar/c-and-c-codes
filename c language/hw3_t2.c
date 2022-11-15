#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, result, variable1, result2, y;
    int demo;
    printf("to find the roots of equation of the type ax^2+bx+c enter the value of a,b,c\n");
    scanf("%f%f%f", &a, &b, &c);
    if ((b * b) < (4 * a * c))
    {
        printf("the number you enter have no real roots or have imaginary roots\n");
        variable1 = sqrt(-pow(b, 2) + (4 * a * c));
        result = (-b + variable1) / (2 * a);
        result2 = (-b - variable1) / (2 * a);
    }
    else
    {
        variable1 = sqrt(pow(b, 2) - (4 * a * c));
        result = (-b + variable1) / (2 * a);
        result2 = (-b - variable1) / (2 * a);
    }
    printf("the two roots of the equation for which you entered the value of a,b,c is %f,%f respectively\n", result, result2);
    printf("thank you\n");
    return 0;
}