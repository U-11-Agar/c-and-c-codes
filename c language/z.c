#include<stdio.h>
int main (void)
{
    int n,z;
    printf("enter positive integers n,r such that r<=n: ");
    scanf("%d%d",&n,&z);
    for (int a=z;a<=n;a++)
    {
       jumble(a,z); 
    }
    return 0;
}
void jumble(int a,int z)
{
    
}
