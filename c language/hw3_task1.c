#include <stdio.h>
#include <math.h>
int main()
{
    int y, z, c;
    float mean, sum = 0, x[1000], stddiv, firstv=0.0, secondv;
    char response[1000];
    printf("hello\n");
    for (y = 0; y < 1000; y += 1)
    {
        printf("give the %d number\n", y + 1);
        scanf("%f", &x[y]);
        printf("do u want to give another number\n");
        scanf("%s", &response[y]);
        if(response[y]!='y')
        {
            break;
        }
    }

    for (z = 0; z <=y; z++)
    {
        sum += x[z];
    }
    mean = sum / (y+1);
    for (c = 0; c <= y; c += 1)
    {
        firstv += pow(x[c] - mean, 2);
    }   
    secondv = firstv / (y+1);
        stddiv = sqrt(secondv);
    printf("the mean of the given number is %f\n", mean);
    printf("the std deviation is %f \n", stddiv);
    return 0;
}