#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int numfrd, total = 0;
    cin >> numfrd;
    vector<int> finger;
    finger.resize(numfrd);
    for (int d = 0; d < numfrd; d++)
    {
        cin >> finger[d];
        total += finger[d];
    }
    // int a[5];
    // for (int d = 1; d <= 5; d++)
    // {
    //     a[d - 1] = total + d;
    // }
    int a[2];
    a[0]=total+1;a[1]=total+5;
    int min, max;
    min = (a[0] - 1) / (numfrd + 1);
    max = (a[1] - 1) / (numfrd + 1);
    if (a[0] == (((numfrd+1)* min)+1))
    {
        cout << 5 - (max - min + 1);
    }
    else
    {
        cout << 5 - (max - min);
    }
    return 0;
}