#include <stdio.h>

int count=0;
void merge(int a[], int l, int m, int r);
void divide(int a[], int l, int r);
int main(void)
{
    printf("Hello babuwolf this the the code for Q 3 \n");
    int n;
    printf("input the n\n");
    scanf("%d", &n);
    int a[100];
    for (int i = 0; i < n; i++)
    {
        printf("input the %d element ", i);
        scanf("%d", &a[i]);
    }
    divide(a, 0, n - 1);
    printf("%d",count);
    return 0;
}
void merge(int a[], int l, int m, int r)
{
    int demo;
    // int _l ;
    for (int j = m + 1; j <= r; j++)
    {
        demo = a[j];
        for (int i = l; i <= m; i++)
        {
            if (demo < a[i])
            {
                for (int k = i; k < j; k++)
                {
                    a[j] = a[k];
                    a[k] = demo;
                    demo = a[j];
                    count++;
                }
            }
        }
    }
}
void divide(int a[], int l, int r)
{
    if (l < r)
    {
        int m;
        m = (l + r ) / 2;
        divide(a, l, m);
        divide(a, m + 1, r);
        merge(a, l, m, r);
    }
}