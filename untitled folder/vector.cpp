#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
#include<numeric>
// #include<algorithm>
using namespace std;
int main(void)
{
    vector<int> q;
    int f;
    cin >> f;
    q.resize(f);
    for (int a = 0; a < f; a++)
    {
        cin >> q[a];
    }
    for (int a = 0; a < f; a++)
    {
        cout << q[a] << endl;
    }
    cout<<accumulate(q.begin(),q.end(),0);
    return 0;
}
//both the method that is :
// 2
// 3
// 4
// and 
// 2 3 4 
// are exceptable;