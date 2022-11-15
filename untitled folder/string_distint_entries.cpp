#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
    string name;
    cin >> name;
    vector<int> arr;
    arr.resize(name.length());
    float h = 0.0;
    for (int d = 0; d < name.length(); d++)
    {
        arr[d] = count(name.begin(), name.end(), name[d]);
    //  cout<<arr[d];
        h += 1.0 / arr[d];
    }
    // cout<<endl<<h<<endl;
    if ((int)h % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
}
//  ---%- IS ONLY USED WITH INT NOT FLOAT OR DOUBLE