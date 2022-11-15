#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int ID;
    struct student *next;
};
void view(struct student *a);
struct student *insert(struct student *a);
struct student *delete (struct student *a, int w);
struct student *search(struct student *a, int w);
int main()
{
    int z, x = 1, q = 0, w;
    struct student *stlist, *h;
    stlist = (struct student *)malloc(sizeof(struct student));
    while (x != 0)
    {
        printf("\nenter your option\n1: view record\n2: insert record\n3: delete record\n4: search record\n5: exit\n");
        scanf("%d", &z);
        stlist = h;
        switch (z)
        {
        case 1:
        {
            if (q == 0)
            {
                printf("database empty");
            }
            else
            {
                view(stlist);
            }
            break;
        }
        case 2:
        {
            stlist = insert(stlist);
            q += 1;
            break;
        }
        case 3:
        {
            printf("enter student's ID:");
            scanf("%d", &w);
            stlist = delete (stlist, w);
            break;
        }
        case 4:
        {
            printf("enter student's ID:");
            scanf("%d", &w);
            stlist = search(stlist, w);
            break;
        }
        case 5:
        {
            x = 0;
            break;
        }
        default:
        {
            printf("invalid input");
            break;
        }
        }
    }
    return 0;
}
void view(struct student *a)
{
    struct student *z=a;
    if (a->next == NULL)
    {
        printf("\nname:%s",a->name);
        printf("\nID:%d",a->ID);
    }
    while (z->next != NULL)
    {
        printf("\nname:%s", z->name);
        printf("\nID:%d", z->ID);
        z = z->next;
    }
}
struct student *insert(struct student *a)
{
    struct student *p, *q;
    p = (struct student *)malloc(sizeof(struct student));
    printf("Enter name:");
    scanf("%s", p->name);
    printf("Enter ID:");
    scanf("%d", &p->ID);
    p->next = NULL;
    if (a == NULL)
    {
        return p;
    }
    else
    {
        q = a;
        while (q->next != NULL)
        {
            q = q->next;
        }
        q->next = p;
        return a;
    }
}
struct student *delete (struct student *a, int w)
{
    struct student *z, *q;
    z = a;
    q = z;
    while (z->next != NULL)
    {
        if (z->ID == w)
        {
            if (z == a)
            {
                a = z->next;
            }
            else
            {
                q->next = z->next;
            }
            z->next = NULL;
            free(z);
            return a;
        }
        else
        {
            q = z;
            z = z->next;
            if (z == NULL)
            {
                printf("no record found");
            }
        }
    }
    return a;
}
struct student *search(struct student *a, int w)
{
    struct student *z;
    z = a;
    while (z->next != NULL)
    {
        if (z->ID == w)
        {
            printf("\nname:%s", z->name);
        }
        else
        {
            z = z->next;
        }
    }
    return a;
}
