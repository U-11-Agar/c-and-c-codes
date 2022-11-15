#include <stdio.h>
#include <math.h>/*using math.h library to directly use sin function*/
int main(void)
{
    int x;
    printf("enter the number which u want the sin of: ");
    scanf("%d", &x);
    if ((sin(x) > 0) && (sin(x) < 1)) //this condition help to avoid negative as well as 0 and 1 condition
    {
        printf("\nthe value of sin(%d) is equal to: %lf", x, sin(x));
    }
    //using %lf because it will give a better result as compare to %f or %d
    else
    {
        printf("\nthe enter number have a negative output or have a value either 0 or 1");
    }
    return 0;
}
