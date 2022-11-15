#include <stdio.h>
int main()
{
    char line[99],demo;
    int z, y, q, t, w;
    printf("input the string\n");
    scanf("%[^\n]s", line);
    y = 0;
    while (line[y] != '\0')
    {
        y += 1;
    }
    printf("%d\n", y + 1);
    w = y;
    t = 0;
    while (t <= w)
    {
        z = 0;
        while (z <= y)
        {
            if (line[z] == ' ')
            {
                q = z;
                while (q < y)
                {
                    demo = line[q + 1];
                    line[q]=demo;
                    q += 1;
                }
                y = y - 1;
                break;
            }
            z += 1;
        }
        t += 1;
    }
    printf("output %s", line);
    return 0;
}