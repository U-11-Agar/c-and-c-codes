#include <iostream>
using namespace std;
// void year3 (int a[])
// {

// }
// void year2 (int a[])
// {

// }
// void year1(int a[])
// {

// }
int main(void)
{
    int year[4];
    for (int w = 0; w < 4; w++)
    {
        cin >> year[w];
    }
    while (1)
    {
        if (year[3] == 9)
        {
            year[3] = 0;
            if (year[2] == 9)
            {
                year[2] = 0;
                if (year[1] == 9)
                {
                    year[1] = 0;
                    if (year[0] == 9)
                    {
                        break;
                    }
                    else
                        year[0] += 1;
                }
                else
                    year[1] += 1;
            }
            else
                year[2] += 1;
        }
        else
        {
            year[3] += 1;
        }
        if ((year[3] == year[2]) || (year[3] == year[1]) || (year[3] == year[0]))
        {
            if (year[3] == 9)
            {
                year[3] = 0;
                if (year[2] == 9)
                {
                    year[2] = 0;
                    if (year[1] == 9)
                    {
                        year[1] = 0;
                        if (year[0] == 9)
                        {
                            break;
                        }
                        else
                            year[0] += 1;
                    }
                    else
                        year[1] += 1;
                }
                else
                    year[2] += 1;
            }
            else
            {
                year[3] += 1;
            }
        }
        if ((year[2] == year[1]) || (year[2] == year[0]))
        {
            if (year[2] == 9)
            {
                year[2] = 0;
                if (year[1] == 9)
                {
                    year[1] = 0;
                    if (year[0] == 9)
                    {
                        break;
                    }
                    else
                        year[0] += 1;
                }
                else
                    year[1] += 1;
            }
            else
                year[2] += 1;
        }
        if (year[1] == year[0])
        {
            if (year[1] == 9)
            {
                year[1] = 0;
                if (year[0] == 9)
                {
                    break;
                }
                else
                    year[0] += 1;
            }
            else
                year[1] += 1;
        }
        if ((year[0] != year[1]) && (year[0] != year[2]) && (year[0] != year[3]) && (year[1] != year[2]) && (year[1] != year[3]) && (year[2] != year[3]))
        {
            break;
        }
    }
    for (int w = 0; w < 4; w++)
    {
        cout << year[w];
    }
    return 0;
}