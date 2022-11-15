int x[100], y[100], demo;
    int z = 0;
    printf("\nenter the number of points you want to give: ");
    scanf("%d", &demo);
    for (z = 0; z < demo; z++)
    {
        printf("\nenter the x co-ordinate of the %d point: ", z + 1);
        scanf("%d", &x[z]);
        printf("enter the y co-ordinate of the %d point: ", z + 1);
        scanf("%d", &y[z]);
    }
    printf("\nthe points entered are:");
    for (z = 0; z < demo; z++)
    {
        printf(" (%d,%d),", x[z], y[z]);
    }
    int dedicated[100], non_dedicated[100], n = 0, o = 0;
    while (z != demo - 1)
    {
        int e = 1;
        for (int a = 0; (a < demo) && (a != z); a++)
        {
            if (((x[z] > x[a]) && (y[z] > y[a])) || ((x[z] < x[a]) && (y[z] < y[a])))
            {
                e *= 1;
            }
            else
            {
                e *= 0;
            }
        }
        if (e == 1)
        {
            dedicated[n] = z;
            n+=1;
        }
        else
        {
            non_dedicated[o] = z;
            o+=1;
        }
        z += 1;
    }