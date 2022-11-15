#include <iostream>
using namespace std;
int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;
    if (((a > 0) && (a < 1001)) && ((b > 0) && (b < 1001)) && ((c > 0) && (c < 1001)))
    {
        cout << a + b + c << endl;
    }
    else
    {
        cout << "error";
    }
    return 0;
}