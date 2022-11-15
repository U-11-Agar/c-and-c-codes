#include <iostream>
using namespace std;

pair<int, int> fibonaci(int numb);

int main(void)
{
    int numb;
    cin >> numb;
    pair<int, int> n;
    n = fibonaci(numb);
    cout << n.first % 1000000007 << endl;
    // cout<<n.first<<n.second<<endl;
    return 0;
}

pair<int, int> fibonaci(int numb)
{
    if (numb == 0)
    {
        return make_pair(0, 1);
    }
    pair<int, int> p = fibonaci(numb >> 1);
    int c = (p.first *(2 * p.second)) - (p.first *p.first);
    int d = p.first * p.first + p.second * p.second;
    if (numb & 1)
    {
        return make_pair(d, c + d);
    }
    else
    {
        return make_pair(c, d);
    }
}
// (fn-1+fn-2)(-f(n-2)) +f(n-1)^2