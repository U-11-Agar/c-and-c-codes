#include <stdio.h>
#include <math.h>//using math.h funtion for using sin and cos function
int main(void)
{
    double input;//double because of we have to cover nuber between (0,1)
    for (input = 0; input <= 1; input += 0.001)//increasing input by 0.001 for getting a good range of output
    {
        printf("sin(%lf)= %lf, cos(%lf)= %lf\n", input, sin(input), input, cos(input));//printing %lf for both sin and cos for getting more accurate output
    }
    return 0;
}