#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    int d;
    string s;
    // cin >> d;
    cin >> s;
    // int h = 0;
    // for (int q = 0; q < d; q++)//s.erase syntax can be used for erasing any elenment.
    // {
    //     if (s[q] == s[q + 1])
    //     {
    //         h += 1;
    //     }
    // }
    s.erase(2,1);
    cout<<s[2];cout<<endl;
    cout<<s;
    cout<<s.length();
    // cout << h << endl;
    return 0;
}