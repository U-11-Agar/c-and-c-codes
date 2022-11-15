#include <stdio.h>

int main()
{
    int x, z, y, d, e, t, q, s, a, c;
    printf("give the numb\n");
    scanf("%d", &x);

    for (z = 1, y = 10; x / y != 0; y *= 10, z += 1)
    {

        if (x / (10 * y) == 0)
        {
            z += 1;
            break;
        }
    }

    printf("the value of no of digit %d \n", z);
    for (s = 1, y = 10, d = 0, e = 0; s <= z / 2; s += 1, y *= 10)
    {
        for (c = 0, a = 1; c < (z - s); c = c + 1)
        {
            a *= 10;
        }
        d = (x - e) % y;
        t = (d * 10) / y;
        e = e + d;
        c = (x / (10 * a)) * (10 * a);
        q = (x - (c)) / a;

        if (t == q)
        {
            c = 0;
            printf("the %d digit from last is %d from starting are same\n", s, s);
            continue;
        }
        else
        {
            c = 1;
            printf("the %d digit from last is %d from starting are not same\n", s, s);
            break;
        }
    }
    if (c == 1)
    {
        printf("the number you enter is not a palindrome");
    }
    if (c == 0)
    {
        printf("the number you enter is a palindrome");
    }
    return 0;
}
