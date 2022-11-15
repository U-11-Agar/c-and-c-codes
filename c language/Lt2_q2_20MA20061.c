#include <stdio.h>
struct student
{
    char name[20];
    int ID;
};
void view(struct student *a);
void insert(struct student *a);
void delete (struct student *a);
void search(struct student *a);
int i;
int main()
{
    int z, x = 1, q = 0, w;
    struct student DB[200];
    while (x != 0)
    {
        printf("\nenter your option\n1: view record\n2: insert record\n3: delete record\n4: search record\n5: exit\n");
        scanf("%d", &z);
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
                for (int f = 0; f < q; f++)
                {
                    view(&DB[f]);
                }
            }
            break;
        }
        case 2:
        {
            insert(&DB[q]);
            q += 1;
            break;
        }
        case 3:
        {
            printf("enter student's ID:");
            scanf("%d", &w);
            int j;
            j = w;
            for (int f = 0; f < q; f++)
            {
                if (DB[f].ID == w)
                {
                    w = f;
                    break;
                }
            }
            if (j == w)
            {
                printf("record empty");
            }
            else
            {
                delete (&DB[w]);
            }
            break;
        }
        case 4:
        {
            printf("enter student's ID:");
            scanf("%d", &w);
            int p;
            p = w;
            for (int f = 0; f < q; f++)
            {
                if (DB[f].ID == w)
                {
                    w = f;
                    break;
                }
            }
            if (p == w)
            {
                printf("record empty");
            }
            else
            {
                search(&DB[w]);
            }
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
    printf("\nname:%s", a->name);
    printf("\nID:%d", a->ID);
}
void insert(struct student *a)
{
    printf("Enter name:");
    scanf("%s", a->name);
    printf("Enter ID:");
    scanf("%d", &a->ID);
}
void delete (struct student *a)
{
    
}
void search(struct student *a)
{
    printf("\nname:%s", a->name);
}
