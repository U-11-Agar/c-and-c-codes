#include<iostream>
#include<string>
using namespace std;
int main (void)
{
    string s("");
    cin>>s;
    s.resize(4);
    cout<<s<<endl<<s.length();
    return 0;
}