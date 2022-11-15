#include <stdio.h>
int array(int n[], int a)
{
    int x;
    if (a == 0)
    {
        return n[0];
    }
    x = n[a] + array(n, a - 1);
    return x;
}
int main()
{
    int n[100], demo, z,c;
    printf("give the input to the array\n");
    for (demo = 0; demo < 100; demo++)
    {
        printf("%d element-\n", demo + 1);
        scanf("%d", &n[demo]);
        printf("if u want to give more input then hit 0\n");
        scanf("%d", &z);
        if (z != 0)
        {
            break;
        }
    }
    c = array(n, demo);
    printf("%d",c );
    return 0;
}