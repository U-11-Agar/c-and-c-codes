#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    vector<int> a, b;
    int n = 1;
    a.resize(n);
    b.resize(n);
    for (int d = 0; d < n; d++)
    {
        cin >> a[d] >> b[d];
        int j=1;
        cin>>j;
        if (j == 0)
        {
            break;
        }
        else
        {
            n += 1;
            a.resize(n);
            b.resize(n);
        }
    }
    for (int d = 0; d < n; d++)
    {
        cout << a[d] << b[d]<<endl;
    }
    cout << a[0] << b[0];
    return 0;
}