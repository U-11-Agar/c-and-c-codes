#include<stdio.h>
int main()
{
int z[1000],even[500],odd[500],demo,demo2,x;
for(demo=0;demo<1000;demo++)
{
    printf("give the %d element of the array\n",demo+1);
    scanf("%d",&z[demo]);
    printf("do u want to continue press 0 if yes\n");
    scanf("%d",&demo2);
    if(demo2!=0)
    {x=demo;
        break;}

}
for(demo=0;demo<=x;demo++)
{
    if((demo+1)%2==0)
    {
        demo2=z[demo];
even[demo/2]=demo2;
    }
    else{
        demo2=z[demo];
        odd[demo/2]=demo2;
    }
}
printf("even array-\n");
for(demo=0;demo<=(x/2);demo++)
{
    
    printf("%d",even[demo]);
}
printf("\nodd array-\n");
for(demo=0;demo<=(x/2);demo++)
{
    printf("%d",odd[demo]);
}
printf("\nthank you");
return 0;
}