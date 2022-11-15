#include<stdio.h>
int main()
{
    int i,demo;
     int no;
    printf ("give the no to be printed\n");
    scanf("%d",&no);
    for (i=1;i<=no;i++)
    {
        for (demo=1;demo<=no-i;demo++)
        {
            printf("*");
        }
        for(demo=1;demo<i;demo++){
            printf("%d",demo);
        }
        printf("%d\n",i);

    }
}