#include <stdio.h>
int main()
{
    char s[10000], demo;
    int a, b, variable;
    printf("enter the string\n");
    scanf("%s", s);
    printf("enter the value of \n a=");
    scanf("%d", &a);
    printf("enter the value of \n b=");
    scanf("%d", &b);
    if (a > b)
    {
        variable = b;
        demo = s[b];
        while (variable < a)
        {
            s[variable] = s[variable + 1];
            variable++;
        }
        s[a] = demo;
    }
    else
    {
        variable = a;
        demo = s[a];
        while (variable < b)
        {
            s[variable] = s[variable + 1];
            variable++;
        }
        s[b] = demo;
    }
    printf("the new string of lettel is %s", s);
    return 0;
}