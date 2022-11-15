#include<stdio.h>
int main()
{
    int w ;
    printf ("give any value ");
    scanf("%d",&w);
    switch(w)
    {
        case 1:
        printf("one\n");
        case 2:
        printf ("two\n");
        case 3:
        printf ("three\n");
        default :
        printf ("nothing");
    };
    return 0;
}