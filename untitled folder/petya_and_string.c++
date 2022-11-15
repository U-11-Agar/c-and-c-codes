#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string s1, s2;
    cin >> s1 >> s2;
    for (int d = 0; d < s1.length(); d++)
    {
        if (isupper(s1[d]))
        {
            s1[d] = tolower(s1[d]);
            // s1[d]+=32;
        }
        if (isupper(s2[d]))
        {
            s2[d] = tolower(s2[d]);
            // s2[d]+=32;
        }
    }
    if (s1 > s2)
    {
        cout << "1";
    }
    else if (s1 == s2)
    {
        cout << "0";
    }
    else
    {
        cout << "-1";
    }
    return 0;
}