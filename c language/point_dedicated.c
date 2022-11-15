/*Questions

Consider a set of points on 2-d plane, so each point has a x-coordinate and a y-coordinate. For 
any two points P1 = (x1, y1) and P2 = (x2, y2), we say P1 is dictated by P2 if x2 > x1 and y2 
> y1 (both conditions have to be satisfied), otherwise P1 is not dictated by P2.

For example, if P1 = (1, 3) and P2 = (2, 6), then P1 is dictated by P2 (as both 2 > 1 and 6 > 3). 
However, if P1 = (4, 3) and P2 = (5, 1), then P1 is not dictated by P2 (as 5 > 4 but 1 < 3, so 
both conditions are not satisfied). Similarly, if P1 = (3, 5) and P2 = (1, 2), then P2 is dictated by 
P1 (as both 3 > 1 and 5 > 2). 

You will use 2 arrays X and Y. X will store the x-coordinates of the points and Y will store the 
Y-coordinates of the points. So the points will be (X[0], Y[0]), (X[1], Y[1]), (X[2], Y[2]),…and 
so on.

Write a C program that does the following:
• Declares two arrays X and Y to store maximum 100 integers each
• Reads in a positive integer n (n < 100)
• Reads in the coordinates of n points. In a single loop, read in the x-coordinates of the 
points in X and y-coordinates of the points in Y (i.e., each iteration of the loop will first 
read the x-coordinate of a point, and then read the y-coordinate of the same point, and 
then go to next iteration of the loop to read the x and y-coordinates of the next point, 
and so on). The coordinates are all integers. You must enter the inputs exactly in this 
order.
• Print the points read nicely. All the points should appear in a single line. 
• Find and print all the points that are NOT dictated by any other point in the set of 
points read. 
• Delete all the points that are NOT dictated by any other point in the set of points read 
from X and Y arrays. Print the points remaining from the X and Y arrays after deletion.

See example below for format of the output to be printed. You can use additional arrays if you  want.
Example:
Points entered: (3, 7), (5, 10), (2, 4), (6, 13), (7, 12)

Your program should print
The points entered are (3, 7), (5, 10), (2, 4), (6, 13), (7, 12)
The non-dictated points are (6, 13), (7, 12)
Remaining points are (3, 7), (5, 10), (2, 4)

*/
#include <stdio.h>
int main(void)
{
    int x[100], y[100], demo;
    int z;
    int dedicated[100], non_dedicated[100], n = 0, o = 0;
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
    z = 0;
    while (z < demo)
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
            n += 1;
        }
        else
        {
            non_dedicated[o] = z;
            o += 1;
        }
        z += 1;
    }
    printf("\nnon-dedicated:");
    for (z = 0; z < o; z++)
    {
        int s;
        s = non_dedicated[z];
        printf(" (%d,%d),", x[s], y[s]);
    }
    printf("\nremaining: ");
    for (z = 0; z < n; z++)
    {
        int c;
        c = dedicated[z];
        printf(" (%d,%d),", x[c], y[c]);
    }
    return 0;
}