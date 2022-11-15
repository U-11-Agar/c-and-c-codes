#include <stdio.h>
int main()
{
    int a, s;
    printf("give a no which u want to know that the no is prime or not \n");
    scanf("%d", &a);
    for (s = 2; s < a; s++)
    {
        if (a % s == 0)
            printf("the no is not a prime no\n");
            
            
        else
        printf("the no is a prime no \n");
        
    }
    return 0;
}