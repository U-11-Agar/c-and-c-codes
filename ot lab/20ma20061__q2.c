
#include <stdlib.h>
#include <stdio.h>
void swap(int *a,int *b)
{
    int g;
    g=*a;
    *a=*b;
    *b=g;
}
int main(void)
{
    printf("hello this is babuwolf and this is the code for qsort\n");
    int n;
    printf("enter the size of the array\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }


    printf("the new array is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}