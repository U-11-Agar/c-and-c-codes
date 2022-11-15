#include<stdio.h>

int main()
{
    int number;

    do
    {
        printf("\nEnter a number : ");
        scanf("%d",&number);
        printf("\nEntered number : %d\n",number);
    }while(number!=0);

    printf("\n**********NOW WITH FOR LOOP*************\n");

    int number2; //NOTE THAT I HAD TO TAKE ANOTHER VARIABLE AS THR PREVIOUS VARIABLE IS 0 ALREADY

    for(number2 /* iterating variable*/ ; number2!=0 /* checking condition*/  ; /* THIS SEEMS EMPTY (why?)*/ )
    {
        printf("\nEnter a number : ");
        scanf("%d",&number2);
        printf("\nEntered number : %d\n",number2);
    }
    return 0;
}
