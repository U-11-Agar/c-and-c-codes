#include <stdio.h>

int main()
{
    long int number, demo, demo2, q, w, e, x;
    printf("enter the no you wanted to see the name of:");
    scanf("%ld", &number);
    for (q = 1, w = 10; w <= number; q++, w *= 10)
    {
        if (number / (10 * w) == 0)
        {
            q = q + 1;
        }
    }
    for(w=1,e=1;w<=q;w++)
    {
e*=10;
    }
    while(number!=0)
    {
        
    }
}