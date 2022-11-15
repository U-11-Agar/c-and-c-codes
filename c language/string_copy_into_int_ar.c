#include <stdio.h>
#include <string.h>
int main()
{
    char a[200];
    int demo, s, b[200], temp;
    printf("entr the string");
    scanf("%s", a);
    s = strlen(a);
    for (demo = 0; demo < s; demo++)
    {
        temp = a[demo];
        b[demo] = temp;
    }
    for (demo = 0; demo < s; demo++)
    {
        printf("%d ", b[demo]);
    }
    printf("it's working");
    return 0;
}