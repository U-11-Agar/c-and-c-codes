#include<stdio.h>
int main()
{
    int u;
    printf("give the no and get the storage locationin infinite loop");
    scanf("%d",&u);
    while(1)
    {
        printf("the starage location of the no u enter(%d) is %d\n",u,&u);
    }
    
}