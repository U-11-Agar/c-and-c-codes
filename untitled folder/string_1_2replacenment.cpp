#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int strle, step;
    cin >> strle >> step;
    string s("");
    cin >> s;
    s.resize(strle);
    if ((strle<1)&&(step<=50))
    {
        return 0;
    }
    for (int w = 1; w <= step; w++)
    {
        for (int vari = 0; vari < strle; vari++)
        {
            if (s[vari] == 'b')
            {
                if (s[vari + 1] == 'g')
                {
                    char temp = s[vari];
                    s[vari] = s[vari + 1];
                    s[vari + 1] = temp;
                }
                vari = vari + 1;
            }
        }
    }
    cout << s;
    return 0;
}
