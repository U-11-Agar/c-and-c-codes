#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    int x = 0;
    string s;
    for (int d = 0; d < n; d++)
    {
        cin >> s;
        if (s == "++X" || s == "X++")
        {
            x++;
        }
        else if (s == "--X" || s == "X--")
        {
            x--;
        }
    }
    cout << x;
    return 0;
}
// s cant be converted to int like "wut" int value and string when taking value be done like (s[3]canot be get input like {"how","are",""}
// give some inputs it!!!!!!
