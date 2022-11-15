#include <stdio.h>

#include <stdlib.h>

int main(void)
{
    int a = 0, b = 1, c = 2;

    If(a < b) printf(" TRUE\n");
    else printf(“ FALSE\n”);

    If(a < b - c) printf(" TRUE\n");
    else printf(" FALSE\n");

    If(b < c - 1) printf(" TRUE\n");
    else printf("FALSE\n");

    If(!c) printf(" TRUE\n");
    else printf("FALSE\n");
    return 0;
}
