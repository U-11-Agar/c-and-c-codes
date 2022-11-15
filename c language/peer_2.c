/*#include<stdio.h>
#include<math.h> has  sin(), abs(), and fabs()
int main(void)
{ 
double interval;
int i;
for(i = 0; i <30; i++)
{
 interval = i/10.0;
 printf(“sin( %lf ) = %lf \t”, interval, abs(sin(interval)));
}


printf(“\n+++++++\n”);
return 0;
}*/
#include <stdio.h>
#include<math.h>
int main (void)
{
    int i;
    double interval;
    for (i=0;i<30;i++)
    {
        interval=i/10.0;
        printf("sin(%lf) = %lf\n",interval,fabs(sin(interval)));
    }
    int j,n;
    j=2;
    i=1;
    n=(i,j);
    printf("\n+++++++\n%d",n);
    return 0;
}