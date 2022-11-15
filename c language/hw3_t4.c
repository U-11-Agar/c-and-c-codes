#include <stdio.h>
int main()
{
   long int number, binary = 0;
    long int y = 1, demo;
    printf("give an integer number of which u want to get the binary representation of\n");
    scanf("%ld", &number);
    printf("the binary represent of %ld is \n", number);
    while (number / 2 != 0)
    {
        demo = number % 2;
        number /= 2;
        binary += demo * y;
        y *= 10;
        if (number / 2 == 0)
        {
            binary += (1 * y);
        }
    }
    printf("%ld", binary);
    printf("\nthank you");
    return 0;
}