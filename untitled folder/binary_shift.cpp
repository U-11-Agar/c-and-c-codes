#include <iostream>
using namespace std;

int main(void)
{
    long long int b;
    int res = 1;
    int a = 2;
    b = 4;
    // while (b > 0)
    // {
    //     if (b & 1)
    //     {
    //         res = res * res * a;
    //     }
    //     a *= a;
    b = b >> 2;
    cout << b;
    // }
    return 0;
}