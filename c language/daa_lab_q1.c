#include <stdio.h>
#include <stdlib.h>

#define max 100

struct node
{
    int key;
    struct node *left, *right;
};

struct node *new (int a)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = a;
    temp->left = temp->right = NULL;
    return temp;
}

void print(struct node *root)
{
    if (root != NULL)
    {
        print(root->left);
        printf("%d \n", root->key);
        print(root->right);
    }
}

struct node *insert(struct node *node, int key)
{

    if (node == NULL)
        return new (key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    return node;
}

int main(void)
{
    int arr[max];
    struct node *a = NULL;
    printf("hello this is the solution for the q no 1 for the lab daa held on 18 oct\n");
    int n;
    printf("how many elements are there in your array\n");
    scanf("%d", &n);
    printf("give the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        a = insert(a, arr[i]);
    }
    printf("the sorted array is\n");
    print(a);
    return 0;
}