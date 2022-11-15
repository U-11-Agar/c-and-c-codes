// The MEX (minimum excluded) of an array is the smallest non-negative integer that does not belong to the array. For instance:

// The MEX of [2,2,1]
//  is 0
// , because 0
//  does not belong to the array.
// The MEX of [3,1,0,1]
//  is 2
// , because 0
//  and 1
//  belong to the array, but 2
//  does not.
// The MEX of [0,3,1,2]
//  is 4 because 0,1,2
//  and 3
//  belong to the array, but 4
// does not.
// Find the maximum possible MEX of an array of non-negative integers such that the bitwise OR of the elements in the array does not exceed X
// .

// Input Format
// The first line contains T
//  denoting the number of test cases. Then the test cases follow.
// Each test case contains a single integer X
//  on a single line.
// Output Format
// For each test case, output on a single line the maximum possible MEX of the array satisfying the given property.

// Constraints
// 1≤T≤105
// 0≤X≤109
#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
    int t;
    cin >> t;
    if ((t < 0) || (t > 100001))
    {
        return 0;
    }
    int x;
    int a , demo;
    while (t != 0)
    {
        cin >> x;
        if ((x < 0) || (x > 1000000001))
        {
            return 0;
        }
         a = 2; demo = 0;
        while (((x + 1) / a) != 0)
        {
            a *= 2;
            demo += 1;
        }
        if (x == 0)
        {
            cout << "1"<<endl;
            // continue;
        }
        else if ((x == pow(2, demo)) || (x == pow(2, demo - 1)))
        {
            cout << x << endl;
        }
        else
        {
            cout << x - 1 << endl;
        }
        t -= 1;
    }
    return 0;
}