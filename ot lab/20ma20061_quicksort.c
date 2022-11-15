#include <stdlib.h>
#include <stdio.h>

int camparator(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
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
    qsort(arr, n,sizeof(int), camparator);
    printf("the new array is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}