#include <stdio.h>

int main()
{
    int operater, no2;
    float no1, result;
    printf("hello\n");
    while (1)
    {
        printf("plz type 1 for addition,2 for subtraction,3 for multiplication,4 for division,5 for exit\n");
        scanf("%d", &operater);
        if (operater != 5)
        {
            switch (operater)
            {
            case 1:
            {
                printf("enter the first no .\n");
                scanf("%f", &no1);
                printf("enter the second no. \n");
                scanf("%d", &no2);
                result = no1 + no2;
                printf("%f\n", result);
                continue;
            }
            case 2:
            {
                printf("enter the first no .\n");
                scanf("%f", &no1);
                printf("enter the second no. \n");
                scanf("%d", &no2);
                result = no1 - no2;
                printf("%f \n", result);
                continue;
            }
            case 3:
            {
                printf("enter the first no .\n");
                scanf("%f", &no1);
                printf("enter the second no. \n");
                scanf("%d", &no2);
                result = no1 * no2;
                printf("%f\n", result);
                continue;
            }
            case 4:
            {
                printf("enter the first no .\n");
                scanf("%f", &no1);
                printf("enter the second no. \n");
                scanf("%d", &no2);
                if (no2 == 0)
                    printf("error");
                else
                {
                    result = no1 / no2;
                    printf("%f\n", result);
                    continue;
                }
            }
            };
        }
        else
            printf("you have choosen to quit \n");
        break;
    }
    printf("thank you");
    return 0;
}