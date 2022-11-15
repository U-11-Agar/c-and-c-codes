#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int g;
    if (b == 0){
        return a;}
    else
    {
        g = gcd(b, a % b);
    }
}
int main(void)
{
    int t;
    cin >> t;
    if (t < 1 || t > 1000)
    {
        return 0;
    }
    while (t > 0)
    {
        int a, b;
        cin >> a >> b;
        if (a < 1 || a > 1000000 || b < 1 || b > 1000000)
        {
            return 0;
        }
        int d = gcd(a, b);
        cout << d << " " << (a / d) * b << endl;
        t -= 1;
    }
    return 0;
}