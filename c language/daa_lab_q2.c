#include <stdio.h>

#define max 1000

int main(void)
{
    int a[max];
    printf("hello this is the solution for the q no 2 for the lab daa held on 18 oct\n");
    int n;
    printf("how many elements are there in your array\n");
    scanf("%d", &n);
    printf("give the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] >= 1000)
        {
            return 0;
        }
    }
    // struct node * arr[max];
    int hash[max]={0};
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            hash[a[i]] += 1;
        }
    }
    int count = 0;int key=0;
    for (int i = 0; i < max; i += 2)
    {
        if (count < hash[i])
        {
            count = hash[i];
            key=i;
        }
    }
    printf("the max fq. is %d for the input %d\n",count,key);
    return 0;
}