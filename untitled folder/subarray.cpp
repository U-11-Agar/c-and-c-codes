#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int arr[n];
    for (int d = 0; d < n; d++)
    {
        cin >> arr[d];
    }
    int s;
    s = subarr(arr, n);
    cout << s << endl;
    return 0;
}

int subarr(int arr[], int n)
{
    int max = 2;
    for (int d = 0; d < n; d++)
    {
        int demo = 2;
        int diff = arr[d + 1] - arr[d];
        for (int g = d + 1; g < n; g++)
        {
            if (diff = arr[g + 1] - arr[g])
                demo += 1;
            else
            {
                break;
            }
        }
        if (demo >= max)
        {
            max = demo;
        }
    }
    return max;
}