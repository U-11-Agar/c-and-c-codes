#include <stdio.h>
#define z x
int main()
{
    int y,x;
    float n[500];
    for (x = 0; x < 500; x++)
    {
        printf("enter the array ");
        scanf("%f", &n[x]);
        printf("doif u wnat to give more Element in array press 6");
        scanf("%d", &y);
        if (y != 6)
        {
            break;
        }
    }
    y = array(n);
    return 0;
}
int array(float n[])
{
    int z,k;
    k=z;
    printf("the elemenr of the array u entered are as %f ", n[k]);
    if (k == 0)
    {
        return 0;
    }
    else
    {
        printf("%f ", array( n[k - 1]));
    }
    return 0;
}