// You are given an integer N
// . Consider the sequence containing the integers 1,2,…,N
//  in increasing order (each exactly once). Find the length of the longest subarray in this sequence such that the bitwise AND of all elements in the subarray is positive.

// Input Format
// The first line contains T
//  denoting the number of test cases. Then the test cases follow.
// Each test case contains a single integer N
//  on a single line.
// Output Format
// For each test case, output on a single line the length of the longest subarray that satisfy the given property.

// Constraints
// 1≤T≤105
// 1≤N≤109
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
    int n;
    while (t != 0)
    {
        cin >> n;
        int a = 2, demo = 0;
        while (((n + 1) / a )!= 0)
        {
            demo++;
            a *= 2;
        }
        if ((n + 1 - pow(2, demo)) >= pow(2, demo - 1))
        {
            cout << n + 1 - pow(2, demo) << endl;
        }
        else
        {
            cout << pow(2, demo - 1) << endl;
        } cout<<"test1";
        t -= 1;
    }
    return 0;
}