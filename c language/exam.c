#include <stdio.h>
void insert_sort(int list[], int size);
int main()
{
    int x[] = {5, 3, 12, 1, 4, 12, 7, 1, 15, 12, 10};
    int i;
    for (i = 0; i < 12; i++)
        printf("%d ", x[i]);
    printf("\n");
    insert_sort(x, 6);
    for (i = 0; i < 12; i++)
        printf("%d ", x[i]);
    printf("\n");
}
void insert_sort(int list[], int size)
{
    int i, j, item;
    for (i = 1; i < size; i++)
    {
        item = list[i];
        for (j = i - 1; (j >= 0) && (list[j] > i); j--)
            list[j + 1] = list[j];
        list[j + 1] = item;
    }
}