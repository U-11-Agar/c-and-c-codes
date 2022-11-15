#include <iostream>
using namespace std;
int maxfn(int a, int b, int c, int d);
int main(void)
{
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    int max;
    max = maxfn(a, b, c, d);
    cout << max << endl;
    return 0;
}
int maxfn(int a, int b, int c, int d)
{
    int temp;
    if ((b / a == 0) && (c / a == 0) && (d / a == 0))
    {
        temp = a;
    }
    if ((a / b == 0) && (c / b == 0) && (d / b == 0))
    {
        temp = b;
    }
    if ((b / c == 0) && (a / c == 0) && (d / c == 0))
    {
        temp = c;
    }
    if ((b / d == 0) && (c / d == 0) && (a / d == 0))
    {
        temp = d;
    }
    return temp;
}