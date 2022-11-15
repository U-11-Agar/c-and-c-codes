// You are given an integer N
//  and a digit D
// . Find the minimum non-negetive integer you should add to N
//  such that the final value of N
//  does not contain the digit D
// .

// Input Format
// The first line contains T
//  denoting the number of test cases. Then the test cases follow.
// Each test case contains two integers N
//  and D
//  on a single line denoting the original number and the digit you need to avoid.
// Output Format
// For each test case, output on a single line the minimum non-negetive integer you should add to N
// .

// Constraints
// 1≤T≤105
// 1≤N≤109
// 0≤D≤9
// Subtasks
// Subtask 1 (100 points): Original constraints
// Sample Input 1
//  5
// 21 5
// 8 8
// 100 0
// 5925 9
// 434356 3
// Sample Output 1
//  0
// 1
// 11
// 75
// 5644
// Explanation
// Test case 1
// : N=21
//  does not contain the digit D=5
// . Hence there is no need to add any integers to N
// .

// Test case 2
// : If 1
//  is added to N=8
// , it becomes equal to 9
// , which does not contain the digit D=8
// .

// Test case 3
// : The minimum integer you should add to N=100
//  such that the final value of N
//  does not contain the digit D=0
//  is 11
// .

// Test case 5
// : The minimum integer which is greater than 434356
//  and does not contain the digit D=3
//  is 440000
// . So we should add 440000−434356=5644
// .
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// int string_array(string& s)
// {
//     vector<int> a;
//     a.resize(s.length());
//     for(int q=0;q<s.length();q++)
//     {
//         a[q]=s[q]-'0';
//     }

//}
int main(void)
{
    int t;
    cin >> t;
    if ((t < 1) || (t > 100001))
    {
        return 0;
    }
    while (t != 0)
    {
        string s;
        int n;
        cin >> s >> n;
        if ((s.length() > 9) || (s.length() < 1))
        {
            return 0;
        }
        vector<int> a;
        a.resize(s.length());
        vector<int> b;
        b.resize(s.length());
        int demo;
        for (int q = 0; q < s.length(); q++)
        {
            a[q] = s[q] - '0';
        }

        for (int q = 0; q < s.length(); q++)
        {
            if (s[q] == n)
            {
                demo = q;
                if (n == 9)
                {
                    s[q - 1] += 1;
                    b[q - 1] = s[q - 1];
                }
                else
                {
                    s[q] += 1;
                    b[q] = s[q] - '0';
                }
                for (int w = q + 1; w < s.length(); w++)
                {
                    s[w] = 0;
                    b[w] = 0;
                }
                break;
            }
            else
                b[q] = s[q] - '0';
        }
        for (int q = demo-1; q < s.length(); q++)
        {
            cout << b[q] - a[q];
        }
        cout<<endl;
        t -= 1;
    }
    return 0;
}