#include <stdio.h>
int main()
{
    const char hi;
    while (hi != '\n')
    {
        scanf("%c", &hi);
        printf("%c", hi);
    }
    return 0;
}