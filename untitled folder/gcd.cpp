#include <iostream>
using namespace std;

void gcd(int a, int b, int c);

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;
    gcd(a, b, c);
    return 0;
}

void gcd(int a, int b, int c)
{
    if (b == 0)
    {
        if (c % a == 0)
        {
            cout << "YES";
            return;
        }
        else
        {
            cout << "NO";
            return;
        }
    }
    gcd(b, a % b, c);
}