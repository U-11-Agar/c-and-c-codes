#include <stdio.h>
#include <string.h>
struct word
{
    char s[20];
    struct word *next;
};
struct word *insert(struct word *a);
struct word *view(struct word *a);
int main()
{
    int z, x = 1;
    struct word *H, *s;
    while (x != 0)
    {
        printf("Enter 1 to type a new word, 0 to quit");
        scanf("%d", &z);
        H = s;
        if (z == 1)
        {
            H = insert(H);
        }
        if (z == 0)
        {
            x = 0;
            H = view(H);
        }
    }
    return 0;
}
struct word *view(struct word *a)
{
    struct word *p;
    p = a;
    while (p->next != NULL)
    {
        printf("\n%s", p->s);
        p = p->next;
    }
    return a;
}
struct word *insert(struct word *a)
{
    struct word *z, *q, *d;
    printf("enter the word: ");
    scanf("%s", d->s);
    z = a;
    q = z;
    if (a == NULL)
    {
        return d;
    }
    while (z->next != NULL)
    {

        if (strcmp(d->s, z->s) <= 0)
        {
            q->next = d;
            d->next = z;
            break;
        }
        q = z;
        z = z->next;
        return a;
    }
}