#include <stdio.h>
void add(int a[][10], int z);
int main()
{
    int array1[20][10], array2[20][10];
    int x, z, y, d, e, w;
    printf("How many number?");
    scanf("%d", &z);
    for (int demo = 1; demo <= z; demo++)
    {
        printf("enter number %d:", demo);
        scanf("%d", &x);
        y = 1;
        while (x / y != 0)
        {
            y *= 10;
        }
        y = y / 10;
        for (w = 0, e = 0; e != x; w += 1, y = y / 10)
        {
            d = (x - e) / y;
            e = e + d * y;
            array1[demo - 1][w] = d;
        }
        for (d = 0; d <= w; d++)
        {
            array2[demo - 1][0] = w ;
            array2[demo - 1][d + 1] = array1[demo - 1][d];
        }
    }
    printf("\nmatrix-\n");
    for (d = 0; d < z; d++)
    {
        for (x = 0; x < 10; x++)
        {
            printf("%d ", array2[d][x]);
        }
        printf("\n");
    }
    add(array2, z);
    return 0;
}
void add(int a[][10], int z)
{
    int w, y, d, e = 0;
    for (int q = 0; q < z; q++)
    {
        w = a[q][0];
        d = w;
        y = 1;
        while (d != 0)
        {
            y *= 10;
            d -= 1;
        }
        y/=10;
        for (int t = 1; t <= w; t++, y /= 10)
        {
            d = a[q][t];
            e = e + d * y;
        }
    }
    printf("output addition = %d", e);
}
