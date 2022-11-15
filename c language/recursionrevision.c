#include <stdio.h>
void print(int a[], int d)
{
    if (d == 0)
    {
        printf("element %d is %d\n", d, a[d]);
        d++;
    }
    else
    {
        print(a, d - 1);
        printf("element %d is %d\n", d, a[d]);
    }
}
int main(void)
{
    int demo = 0, a[6];
    while (demo <= 5)
    {
        printf("give the element %d", demo + 1);
        scanf("%d", &a[demo]);
        demo += 1;
    }
    print(a, demo-1);
    return 0;
}