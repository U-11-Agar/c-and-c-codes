#include <stdio.h>
void nextnum(int z, int ar[]);
void minn(int ar[], int z);
int min, armin;
int main()
{
    int z, demo, ar[z];
    printf("how many digit (z)?\n");
    scanf("%d", &z);
    for (demo = 0; demo < z; demo++)
    {
        printf("enter digit %d:\n", demo + 1);
        scanf("%d", &ar[demo]);
    }
    printf("input array");
    for (demo = 0; demo < z; demo++)
    {
        printf("%d", ar[demo]);
    }
    nextnum(z, ar);
    printf("\noutput");
    for (demo = 0; demo < z; demo++)
    {
        printf("%d", ar[demo]);
    }
    return 0;
}
void nextnum(int z, int ar[])
{

    if (ar[z - 2] >= ar[z - 1])
    {
        nextnum(z - 1, ar);
    }
    else
    {
        min = ar[z - 2];
        armin = z - 2;
        minn(ar, z);
    }
}
void minn(int ar[], int z)
{
    int c, d, demo;
    if (ar[z - 1] <= min)
    {
        minn(ar, z - 1);
    }
    else
    {
        ar[armin] = ar[z - 1];
        ar[z - 1] = min;
        for (demo = armin + 1; demo > armin + ((z - 1 - armin) / 2); demo++)
        {
            c = ar[demo];
            d = ar[z + 1 - demo];
            ar[demo] = d;
            ar[z + 1 - demo] = c;
        }
    }
}
