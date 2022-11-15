#include <stdio.h>
int main()
{
    int x, z, y, d, e, t;
    printf("give the numb\n");
    scanf("%d", &x);

    for (z = 1, y = 10, d = 0, e = 0; x / y != 0; y *= 10, z += 1)
    {
        d = (x - e) % y;
        t = (d *10)/ y;
        e = e + d;
        printf("the value of the %d digit from last is %d\n", z, t);
        if (x/(10*y)==0){
            printf("the value of the %d digit from last is %d\n",z+1,x/y);
        }
    }
    printf("the value of no of digit %d \n", z);
    return 0;
}
