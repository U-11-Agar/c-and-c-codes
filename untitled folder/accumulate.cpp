// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main(void)
{

    vector<int> w{1,2,3,4,5};
    // w.resize(5);
    cout << accumulate(w.begin(),w.end(),0);
    return 0;
}
//just a how accumulate function work