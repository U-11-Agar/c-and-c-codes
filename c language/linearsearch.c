#include <stdio.h>
int main(void)
{
    int arr[10], demo = 1, search;
    printf("hello this function will do linear search\n");
    int s = 1;
    while (s != 0)
    {
        printf("give the %d input\n", demo);
        scanf("%d", &arr[demo - 1]);
        demo += 1;
        printf("do u want to give more input? if yes enter 1, else 0\n");
        scanf("%d", &s);
    }
    printf("give the number which u want too search\n");
    scanf("%d", &search);
    for (s = 0; s < demo; s += 1)
    {
        if (arr[s] == search)
        {
            printf("the requried entry is %d", s + 1);
            break;
        }
        else
        {
            continue;
        }
    }
    if ((s == demo - 1) && (arr[s] != search))
    {
        printf("there is no element found");
    }
    return 0;
}