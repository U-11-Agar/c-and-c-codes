#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    vector<int> a;
    int m;
    vector<int> b;
    a.resize(n);
    b.resize(m);
    input(a);
    cin >> m;
    input(b);
    int first = 0, second = 0;
    for (int d = 0; d < m; d++)
    {
        for (int w = 0; w < n; w++)
        {
            if (a[w] == a[b[d]])
            {
                first += w + 1;
                second += n - w;
                break;
            }
        }
    }
    cout << first << " " << second;
    return 0;
}
void input(vector<int> a)
{
    for (int d = 0; d < a.size(); d++)
    {
        cin >> a[d];
    }
}