#include <iostream>
using namespace std;

int main(void)
{
    int number;
    cin >> number;
    long long int a, temp;
    temp = 1;
    a = 4;
    int b = number - 3;
    while (b > 0)
    {
        if (b & 1)
        {
            temp *= a;
        }
        a *= a;
        b = b >> 1;
    }
    cout << 3 * (3*number - 1) * temp;
    return 0;
}