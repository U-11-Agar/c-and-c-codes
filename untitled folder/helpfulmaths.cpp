#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(void)
{
    string s;
    cin >> s;
    if(s.length()>100)
    {
        return 0;
    }
    int a[(s.length() + 1) / 2];
    for (int q = 0; q < s.length(); q += 2)
    {
        a[q / 2] = s[q] - '0';
    }
    // for (int q = 0,i=0; q < s.length(); q += 2,i+=1)
    // {
    //     s[q] = *min_element(a, a + ((s.length() + 1) / 2))+'0';
    // }
    sort(a, a + ((s.length() + 1) / 2));
    for (int q = 0; q < s.length(); q += 2)
    {
        s[q] = a[q / 2] + '0';
    }
    cout << s;
    return 0;
}