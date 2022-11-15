#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
    cout<<"hello babuwolf"<<endl;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        vector<int> a;
        int n;
        cout<<"enter the size of the array"<<endl;
        cin>>n;
        a.resize(n);
        cout<<"input the array a"<<endl;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        vector<int>b;
        b.resize(n);
        b=a;
        sort(b.begin(),b.end());

    }
    
}