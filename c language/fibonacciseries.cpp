#include <iostream>

using namespace std;

int fibonacci(int s)
{
    int a = 1;
    if (s > 0)
    {
        if (s == 2)
        {
            return 1;
        }
        if (s == 1)
        {
            return 1;
        }
        a = fibonacci(s - 2) + fibonacci(s - 1);

        // cout << a << "\n";
        return a;
    }
    else
    {
        return 0;
    }
}
int main(void)
{
    int numberofterms, s;
    cout << "give the number of terms u want to be get printed\n";
    cin >> numberofterms;
    s = fibonacci(numberofterms);
    cout << s;
    return 0;
}