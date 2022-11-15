#include <stdio.h>
int main()
{
    int numb[100], w, digit, realno, r;
    printf("how many digit are there in your numb\n");
    scanf("%d",&digit);
    printf("give the number plz\n");
    scanf("%d", &realno);
    for (w = 0; w < digit; w++)
    {
        printf("give the %d digit of your no\n", w + 1);
        scanf("%d", &numb[w]);
    }
    w = 0;
    while (w < digit)
    {
        for (r = 0; r < digit; r++)
            numb[w] *= numb[w];
        w += 1;
    }
    for (w = 0, r = 0; w < digit; w++){
        r = r + numb[w];}
    if (r == realno)
        printf("the no u enter is a armstrong number\n thank you");
    else
        printf("the number u enter is not an armstrong\n thank you");
    return 0;
}