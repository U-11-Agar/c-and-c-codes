#include <stdio.h>
int main()
{
    int dec;
    scanf("%d",&dec);
    do{
        printf("%2d",dec/2);
        dec/=2;
    }
    while (dec!=0);
    printf("\n");
    return 0;
}