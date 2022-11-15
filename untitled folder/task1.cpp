#include <iostream>
using namespace std;
int main(void)
{
    int a, b, t;
    cin >> t;
    if ((t < 1) || (t > 20))
    {
        return 0;
    }
    while (t != 0)
    {
        cin >> a >> b;
        if ((a + b > 0) || (a + b < 201))
        {
            if (a == 0)
            {
                cout << "Liquid" << endl;
            }
            else if (b == 0)
            {
                cout << "Solid" << endl;
            }
            else
            {
                cout << "Solution" << endl;
            }
        }
        else
        {
            t -= 1;
            continue;
        }
        t -= 1;
    }
    return 0;
}