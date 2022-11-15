#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int row;
    cin >> row;
    for (int d = 0; d < row / 2; d++)
    {
        if (d == 0)
        {
            cout << left << "*" << setw(row - 1) << right << "*" << endl;
        }
        else
        {
            // cout << setfill('%');
            cout << left << "*" << setw(d);
            cout << internal << string(1, '*') << setw(row - ((d + 1) * 2) + 1) << string(1, '*');
            cout << right << setw(d) << "*" << endl;
        }
    }
    if (row % 2 != 0)
    {
       cout << left << "*" << setw(4);
            cout << internal << string(1, '*') << setw(row - ((4 + 1) * 2) + 1) << string(1, '*');
            cout << right << setw(4) << "*" << endl;
    }
    // for (int d = (row / 2) - 1; d >= 0; d--)
    // {
    //     if (d == 0)
    //     {
    //         cout << "*" << setw(d);
    //         cout << setw((row / 2) - (d + 1));
    //         cout << setw((row / 2) - (d + 1));
    //         cout << setw(d) << "*" << endl;
    //     }
    //     if (d > 0)
    //     {
    //         cout << left << "*" << setw(d - 1);
    //         cout << left << string(1, '*') << setw((row / 2) - (d + 1));
    //         cout << right << setw((row / 2) - (d + 1)) << string(1, '*');
    //         cout << right << setw(d - 1) << "*" << endl;
    //     }
    // }
    return 0;
}