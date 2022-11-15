#include <iostream>
// #include<algorithm>
#include <vector>
using namespace std;
int main(void)
{
    int n;
    // vector<int> arr;
    cin >> n;
    vector<int>arr;
    arr.resize(n);
    for (int q = 0; q < n; q++)
    {
        cin >> arr[q];
    }
    int max, min;
    // max = *max_element(arr, arr.end());
    min = *min_element(arr.begin(),arr.end());
    // cout << max << min;
    cout<<min<<endl;
    return 0;
}