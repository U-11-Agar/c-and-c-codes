#include <stdio.h>
int main()
{
    int no[100], i, demo, x, n;
    char response;
    n = 1;
    while (n > 0)
    {
        printf("loop no %d\n", n);
        
        printf("total no of digits in ur number\n");

        scanf("%d", &demo);
        for (x = 0; x < demo; x++)
        {

            printf("enter the %d digit of ur no\n", x + 1);
            scanf("%d", &no[x]);
            
        }

        for (i = 0; i < demo; i++)
        {
            if (no[i] == no[demo - 1 - i])
                x = 0;
            else
            {
                x = 1;
                break;
            }
        }
        if (x == 0)
            printf("the no u enter is a plaindrome\n");
        else{
            printf("the no is not a plaindrome\n");}
        printf("do you want to give any other number(y/n)\n");
        scanf("%c", &response);
        if (response == 'y')
        {
            n = n + 1;
            continue;
        }
        else
            break;
    }

    return 0;
}