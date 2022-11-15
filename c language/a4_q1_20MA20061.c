#include <stdio.h>
int main()
{
    int m, n, p, demo1, demo2, t, d, q = 0;

    printf("input: an array of Dimensions mxn and an array with Dimensions nxp\nenter the value of m,n,p-\n");
    scanf("%d%d%d", &m, &n, &p);
    int a[m * n], b[n * p], s[m * p];
    printf("input the first matrix\n");

    for (demo1 = 1, t = 0; demo1 <= m; demo1++)
    {
        for (demo2 = 1; demo2 <= n; demo2++, t++)
        {
            printf("enter element (%d,%d)\n", demo1, demo2);
            scanf("%d", &a[t]);
        }
    }

    printf("input the second matrix\n");

    for (demo1 = 1, t = 0; demo1 <= p; demo1++)
    {
        for (demo2 = 1; demo2 <= n; demo2++, t++)
        {
            printf("enter element (%d,%d)\n", demo2, demo1);
            scanf("%d", &b[t]);
        }
    }
    for (demo1 = 0, t = 0; demo1 < m; demo1++)
    {
        for (demo2 = 0; demo2 < p; demo2++, t++)
        {
            for (d = 0, q = 0; d < n; d++)
            {
                q = q + a[n * demo1 + d] * b[n * demo2 + d];
            }
            s[t] = q;
        }
    }
    printf("the resultant Matrix is-\n");
    for (demo1 = 1, t = 0; demo1 <= m; demo1++)
    {
        printf("\n");
        for (demo2 = 1; demo2 <= p; demo2++, t++)
        {
            printf("%d ", s[t]);
        }
    }

    printf("\nthanku");
return 0;
}