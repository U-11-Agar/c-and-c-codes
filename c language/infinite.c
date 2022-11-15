#include <stdio.h>
int main()
{
     long double c = 0, sum = 1;
    while (1)
    {
        c += sum;
        sum += 1;
        if(c==(-1.00/12))
        {
            break;
        }
    }
    printf("%Lf", c);
    return 0;
}