#include<stdio.h>
int main(void)
{
    int apple ,banana,cherries,z;
    printf("enter the number of apple, banana, mango respectivily: ");
    scanf("%d%d%d",&apple,&banana,&cherries);
    for(int a=1;a<=(apple+banana+cherries);a++)
    {
        if ((apple==banana)&&(banana==cherries))
        {
apple-=1;
printf("apple,");
        }
        else{

        }
    }
    return 0;
}