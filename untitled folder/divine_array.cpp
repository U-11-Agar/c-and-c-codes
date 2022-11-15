#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void modification(vector<int> &a, vector<int> &k, vector<int> &x, int n, int q);
int main(void)
{
    int t;
    cin >> t;
    if ((t < 1) || (t > 1001))
    {
        return 0;
    }
        int n;
        int q;
        vector<int> a;
        vector<int> x;
        vector<int> k;
    while (t > 0)
    {
        cin >> n;
        a.resize(n);
        for (int d = 0; d < n; d++)
        {
            cin >> a[d];
            if ((a[d] > n) || (a[d] < 1))
            {
                return 0;
            }
        }
        cin >> q;
        k.resize(q);
        x.resize(q);
        for (int d = 0; d < q; d++)
        {
            cin >> x[d] >> k[d];
            if ((x[d] < 1) || (x[d] > n) || (k[d] < 0) || (k[d] > 1000000001))
            {
                return 0;
            }
        }
        modification(a, k, x, n, q);
        t -= 1;
    }
    return 0;
}
void modification(vector<int> &a, vector<int> &k, vector<int> &x, int n, int q)
{
    int h = 2;
    // h = *max_element(k.begin(), k.end());
    vector<vector<int> > arr(h, vector<int>(n));
    int e;
    for (int d = 0; d < h; d++)
    {
        if (d == 0)
        {
            arr[0] = a;
        }
        else
        {
            for (int p = 0; p < n; p++)
            {
                arr[d][p] = count(arr[d - 1].begin(), arr[d - 1].end(), arr[d - 1][p]);
            }
            if (arr[d] == arr[d - 1])
            {
                e = d;
                break;
            }
            else
            {
                h += 1;
                arr.resize(h, vector<int>(n));
            }
        }
    }
    for (int d = 0; d < q; d++)
    {
        if (k[d] <= e)
        {
            cout << arr[k[d]][x[d] - 1] << endl;
        }
        else
        {
            cout << arr[e][x[d] - 1] << endl;
        }
    }
    arr.resize(0,vector<int> (0));
    arr.clear();
    return;
}