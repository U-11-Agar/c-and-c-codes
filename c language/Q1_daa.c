#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} storage;

storage *arr[10];

void delete_(storage *a, int key)
{

    struct node *temp = a, *temp1;
    if (temp != NULL)
    {
        if (temp->data == key)
        {
            temp1 = temp;
            a = temp->next;
            free(temp1);
            return;
        }
        else
        {
            while (temp->next)
            {
                if (temp->next->data == key)
                {
                    temp1 = temp->next;
                    temp->next = temp->next->next;
                    free(temp1);
                    return;
                }
                temp = temp->next;
            }
        }
    }
    return;
}
void insert(storage *a, int key)
{
    struct node *temp;
    struct node *temp1;

    if (a == NULL)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = key;
        temp->next = NULL;
        a = temp;
    }
    else
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp1 = a->next;
        temp->data = key;
        a->next = temp;
        temp->next = temp1;
    }

    return;
}
int search(storage *a, int key)
{
    struct node *temp;
    temp = a;
    while (temp)
    {
        if (temp->data == key)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

void hash_fn(void)
{
    char x;
    printf("what you want to do that is\n DELETE (input D) \n Insert(input I) \n Search (input S)\n else (input E)quit\n");
    scanf("%c", &x);
    // printf("give an "
    //        "int"
    //        " input");
    // int n;
    // scanf("%d", &n);
    // int index;
    // index = n % 10;
    switch (x)
    {
    case 'E':
    {
        exit(0);
        break;
    }
    case 'D':
    {
        printf("give an "
               "int"
               " input");
        int n;
        scanf("%d", &n);
        int index;
        index = n % 10;
        delete_(arr[index], n);
        break;
    };
    case 'I':
    {
        printf("give an "
               "int"
               " input");
        int n;
        scanf("%d", &n);
        int index;
        index = n % 10;
        insert(arr[index], n);
        break;
    };
    case 'S':
    {
        printf("give an "
               "int"
               " input");
        int n;
        scanf("%d", &n);
        int index;
        index = n % 10;
        search(arr[index], n);
        break;
    };
    default:
    {
        break;
    }
    }
    return;
}
int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        arr[i] = NULL;
    }
    printf("this is the programe for implementing of hash fuction in c\n");
    // while(1)
    // {
    int n = 1;
    while (n)
    {
        hash_fn();
    }
    // }
    return 0;
}