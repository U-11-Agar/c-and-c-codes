#include <iostream>
#include <string>
using namespace std;

void d_vol(string &str);
void insert(string &str);

int main(void)
{
    string str;
    cin >> str;
    d_vol(str);
    insert(str);
    cout << str;
    return 0;
}
void d_vol(string &str)
{
    int f = str.length();
    for (int d = 0; d < f; d++)
    {
        if (str[d] == 'a' || str[d] == 'e' || str[d] == 'i' || str[d] == 'o' || str[d] == 'u')
        {
            str.erase(d, 1);
            d-=1;
        }
        //  else
        //  {
        //      insert(str,d);
        //  }
        if (isupper(str[d]))
        {
            str[d]+=32;
        }
        // f-=1;aeioutour
        
    }
    return;
}
void insert(string &str)
{int d=0;
int f=str.length();
f*=2;
    // for (int d = 0; d < (2 * str.length()); d += 2)
    //     str.insert(str.begin() + d, '.');
    while(d< f)
    {
str.insert(str.begin()+d,1,'.');
d+=2;
    }
    return;
}
