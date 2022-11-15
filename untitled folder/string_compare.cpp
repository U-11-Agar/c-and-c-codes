// capital letter have smaller value than the small letter and the order is z->Z
#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string q = "pqrsT", s = "Z";
    // getline(cin,s);
    // getline(cin,q);
    if (q == s)
    {
        cout << "2";
    }
    if (s > q)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
    cout << endl;
    char w = s[0] - '0';
    cout << (int)w;
    return 0;
}