#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
    string s = ("greeks");
    vector<int> v;
    v.resize(6);
    // system("sudo apt-get update");
    for (int d = 0; d < 100; d++)
    {
        cout << s[d] << v[d] << endl;
    }
    return 0;
}