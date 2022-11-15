#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;
    vector<int> a;
    a.resize(n);
    for (int d = 0; d < n; d++)
    {
        cin >> a[d];
    }
    int index, max = 0, demo;
    for (int d = 0; d < n; d++)
    {
        if (a[d] % m == 0)
        {
            demo = a[d] / m;
            if (demo >= max)
            {
                index = d + 1;
                max = demo;
            }
        }
        else
        {
            demo = (a[d] / m) + 1;
            if (demo >= max)
            {
                max = demo;
                index = d + 1;
            }
        }
    }
    cout<<index;
    return 0;
}