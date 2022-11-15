#include <stdio.h>
int main()
{
    int x, demo, z = 0, digit, y, sum = 0;
    printf("give the no which u want to see the sum of digit \n");
    scanf("%d", &x);
    for (demo = 10, y = 1; x / demo != 0; demo *= 10, y += 1)
    {
        digit = (x - z) % demo;
        z += digit;
        digit /= (demo / 10);
        printf("the %d no from last is %d\n", y, digit);
        sum += digit;
        if (x / (10 * demo) == 0)
        {
            digit = x / demo;
            printf("the %d no from last is %d\n", y + 1, digit);
            sum += digit;
        }
    }
    printf("the no of digit in ur number is %d\n", y);
    printf("the sum of the digit is equal to %d\n", sum);
    return 0;
}