#include <stdio.h>
int main()
{
    int p;
    char c, z;
    int A[12], B[12];
    for (p = 0; p < 12; p++)
    {
        scanf("%c",&c);
        scanf("%c",&z);
        if (c == '\0')
        {
            break;
        }
        A[p] = c - '0';
        B[p] = z - '0';
        printf("\n");
    }
    for (p = 0; p < 12; p++)
    {
        printf("%d\n", A[p] + B[p]);
    }
    return 0;
}