#include <stdio.h>
#include <stdlib.h>
void print_sorted(int **A, int m);
int main()
{
    int m, **A;
    int n;
    printf("how many list?");
    scanf("%d", &m);
    A = (int **)malloc(sizeof(m));
    for (int f = 0; f < m; f++)
    {
        printf("what is the length of list %d? ", f + 1);
        scanf("%d", &n);
        A[f] = (int *)malloc(sizeof(n + 1));
        for (int z = 0; z < n; z++)
        {
            printf("enter number %d: ", z + 1);
            scanf("%d", &A[f][z]);
        }
    }
    print_sorted(A, m);
    return 0;
}
void print_sorted(int **A, int m)
{
    int b[100], z, w = 1;
    int p = 0;
    for (int f = 0; f < m; f++)
    {
        for (int z = 0; z < (sizeof(A[f]) / sizeof(f)); z++, p++)
        {
            b[p] = A[f][z];
        }
    }
    while (w <= p)
    {
        for (int i = 0; i < p; i++)
        {
            if (b[i] > b[i + 1])
            {
                z = b[i];
                b[i] = b[i + 1];
                b[i + 1] = z;
            }
        }
        w += 1;
    }

    for (int i = 0; i < p; i++)
    {
        printf("%d", b[i]);
    }
}