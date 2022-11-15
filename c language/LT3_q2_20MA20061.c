#include <stdio.h>
#include <stdlib.h>
struct term *mul(struct term *p1, struct term *p2, struct term *pr);
struct term *arrange(struct term *pr);
void display(struct term *pr);
struct term
{
    int exponent;
    int coefficient;
    struct term *next;
};
int main(void)
{
    int d = 1, x;

    struct term *p1, *p2, *pr,*ps;
    p1 = (struct term *)malloc(sizeof(struct term));
    p2 = (struct term *)malloc(sizeof(struct term));
    pr = (struct term *)malloc(sizeof(struct term));

    printf("enter polymonial 1");
    printf("Press 1 to enter a term, 0 to stop: ");
    scanf("%d", &x);
    while (x != 0)
    {
        printf("enter exponent: ");
        scanf("%d", &p1->exponent);
        printf("enter coefficient");
        scanf("%d", &p1->coefficient);
        printf("Press 1 to enter a term, 0 to stop: ");
        scanf("%d", &x);
        if (x == 1)
        {
            p1 = p1->next;
        }
        else
        {
            p1->next = NULL;
        }
    }
    printf("enter polymonial 2");
    printf("Press 1 to enter a term, 0 to stop: ");
    scanf("%d", &x);
    while (x != 0)
    {
        printf("enter exponent: ");
        scanf("%d", &p2->exponent);
        printf("enter coefficient");
        scanf("%d", &p2->coefficient);
        printf("Press 1 to enter a term, 0 to stop: ");
        scanf("%d", &x);
        if (x == 1)
        {
            p2 = p2->next;
        }
        else
        {
            p2->next = NULL;
        }
    }
    mul(p1, p2, pr);
    pr = arrange(pr);
    display(pr);
    return 0;
}
struct term *mul(struct term *p1, struct term *p2, struct term *pr)
{
    struct term *z, *a, *x;
    z = p1;
    a = p2;
    x = pr;
    while (z->next != NULL)
    {
        while (a->next != NULL)
        {
            x->coefficient = z->coefficient * a->coefficient;
            x->exponent = z->exponent * a->exponent;
            a = a->next;
            x = x->next;
        }
        z = z->next;
    }
    return pr;
}
struct term *arrange(struct term *pr)
{
    struct term *z;
    z = pr;
    while (z->next != NULL)
    {
        struct term *a, *q, *d;
        a = z;
        q = pr;
        d = q;
        while (q->next != NULL)
        {
            if (a->exponent == q->exponent)
            {
                a->coefficient += q->coefficient;
                d->next = q->next->next;
                q->next = NULL;
                q->next = d->next;
                d=q;
            }
            else
            {
                q = q->next;
                d=q;
            }
            
        }
        z = z->next;
    }
    return pr;
}
void display(struct term *pr)
{
    struct term *z;
    z = pr;
    while (z->next != NULL)
    {
        printf("\n");
        printf("%dx%d+", z->coefficient, z->exponent);
    }
}