#include <stdio.h>
#include <stdlib.h>

#define max 100

typedef struct node
{
    int value;
    struct node *left;
    struct node *right;
} bst;

bst *travel(bst *demo1)
{
    printf("%d", demo1->value);
    demo1->left = travel(demo1->left);
    demo1=demo1->left;
    printf("%d", demo1->value);
    demo1->right = travel(demo1->right);
    demo1=demo1->right;
    printf("%d", demo1->value);
    return demo1;
}

struct node *new_node(int val)
{
    bst *temp1;
    temp1 = (struct node *)malloc(sizeof(struct node));
    temp1->value = val;
    temp1->left = NULL;
    temp1->right = NULL;
    return temp1;
}

struct node *make_bst(int arr[], int n)
{
    bst *temp;
    // temp=(bst*)malloc(sizeof(bst));
    bst *temp2;
    // temp2=(bst*)malloc(sizeof(bst));
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            temp = new_node(arr[i]);
            temp2 = temp;
            printf("%d", temp2->value);
        }
        else
        {
            if (arr[i] < arr[i - 1])
            {
                temp->left = new_node(arr[i]);
                temp = temp->left;
                printf("%d", temp->value);
            }
            else
            {
                temp->right= new_node(arr[i]);
                temp=temp->right;
                printf("%d", temp->value);
            }
        }
    }
    return temp2;
}

int main(void)
{
    printf("this is the code for bst\n");
    int arr[max];
    int n;
    printf("give the size of the array\n");
    scanf("%d", &n);
    printf("give the input array\n");
    for (int i; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    struct node *head;
    head = 
    make_bst(arr, n);
    head = travel(head);
    printf("what do u want to do with this tree\n");
    return 0;
}