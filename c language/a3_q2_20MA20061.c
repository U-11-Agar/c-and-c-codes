#include <stdio.h>
int main()
{
    int number, prime, demo, s, q;
    printf("hello \nenter the number\n ");
    scanf("%d", &number);
    for (demo = 2; demo <=number; demo++)
    {
        if (demo == 2)
            q = 1;
        else
        {
            for (s = 2; s < demo; s++)
            {
                if (demo % s != 0)
                    q = 1;
                else
                {
                    q = 0;
                    break;
                }
            }
        }
        if (q == 1)
        {
            s = 0;
            if (number % demo == 0)
            {
                while (number % demo == 0)
                {

                    number = number / demo;
                    s = s + 1;
                }
                printf("prime factor of the number is %d, multiplicity: %d\n", demo, s);
            }
        }
    }
    printf("thank you");
}