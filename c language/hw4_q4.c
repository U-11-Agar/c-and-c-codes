#include <stdio.h>
int main()
{
    int ar[100], demo, z, x;
    printf("enter the array");
    for (demo = 0; demo < 100; demo++)
    {
        printf("enter the %d element-\n", demo + 1);
        scanf("%d", &ar[demo]);
        printf("do u want to give more input if yes press 0\n");
        scanf("%d", &x);
        if (x != 0)
        {
            break;
        }
    }
    x = demo + 1;
    printf("the size of the array is %d\n the enter array is -\n", x);

    for (demo = 0; demo <x; demo++)
    {
        printf("%d", ar[demo]);
    }
    for (demo = 0; demo < x ; demo++)
    {
        z = ar[demo];
        if (ar[demo] > ar[demo + 1])
        {
            ar[demo] = z;
        }
        else
        {
            z = ar[demo + 1];
            ar[demo] = z;
        }
    }
    printf("\nthe new array is-\n");
    for (demo = 0; demo < x-1; demo++)
    {
        printf("%d", ar[demo]);
    }
    printf("\nthank you");
    return 0;
}