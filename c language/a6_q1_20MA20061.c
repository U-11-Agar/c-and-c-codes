#include <stdio.h>
struct Tutor
{
    char name[20];
    char ID[20];
    char subject[20][20];
    int score;
};
struct TutorDB
{
    struct Tutor T[100];
    int n;
};
void view(struct TutorDB *a);
void insert(struct TutorDB *a);
int i;
int main()
{
    int z, x=1;
    struct TutorDB L;
    L.n = 0;
    while (x != 0)
    {
        printf("\npress\n1: View database\n2: Insert Database\n3: Exit\n");
        scanf("%d", &z);
        switch (z)
        {
        case 1:
        {
            view(&L);
            break;
        }
        case 2:
        {
            insert(&L);
            break;
        }
        case 3:
        {
            x = 0;
            break;
        }
        }
    }
    return 0;
}
void view(struct TutorDB *a)
{
    int z;
    
    if (a->n == 0)
    {
        printf("Database empty");
    }
    else
    {
        for (z = 0; z < a->n; z += 1)
        {
            printf("\nname:%s", a->T[z].name);
            printf("\nID:%s", a->T[z].ID);
            printf("\nsubject: ");
            for (int x = 0; x < i; x += 1)
            {
                printf("%s ", a->T[z].subject[x]);
            }
            printf("\nScore:%d", a->T[z].score);
        }
    }
}
void insert(struct TutorDB *a)
{
    printf("Enter name:");
    scanf("%s", a->T[a->n].name);
    printf("Enter ID:");
    scanf("%s", a->T[a->n].ID);
    printf("\nhow many subject?");
    scanf("%d", &i);
    for (int x = 0; x < i; x += 1)
    {
        printf("\nenter Subject %d:", x + 1);
        scanf("%s", a->T[a->n].subject[x]);
    }
    printf("enter score:");
    scanf("%d", &a->T[a->n].score);
    a->n+=1;
}