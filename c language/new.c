#include <stdio.h>
#include <math.h>
int n;

struct vector
{
    int a[n];
};
struct vector vectorsum(struct vector *p, struct vector *q)
{
    int i;
    struct vector p;
    for (i = 0; i < n; i++)
        p.a[i] = p->a[i] + q->a[i];
    return p;
}
float magnitude(struct vector p)
{
    int i;
    float r = 0;
    for (i = 0; i < n; i++)
    {
        r = r + (p.a[i]) * (p.a[i]);
    }
    r = sqrt(r);
    return r;
}
float cos(struct vector *p, struct vector *q float r, float s)
{
    int i;
    int x = 0;
    float y;
    for (i = 0; i < n; i++)
    {
        x = x + (p->a[i]) * (q->a[i]);
    }
    y = x / (r * s);
    y = arccos(y);
    return y;
}

int main()
{
    int n, i;
    float r, s, y;
    struct vector v1, v2, p;
    printf("enter the component of 2 vectors\n");
    for (i = 0; i < n; i++)
        scanf("%d", &v1.a[i]);
    for (i = 0; i < n; i++)
        scanf("%d", &v2.a[i]);
    p = vectorsum(v1, v2);
    printf("sum of v1 + v2 is \n");
    for (i = 0; i < n; i++)
        printf("%d", p.a[i]);
    r = magnitude(v1);
    s = magnitude(v2);
    y = cos(v1, v2, r, s);
    printf("cosine angle is %f", y);
    return 0;
}