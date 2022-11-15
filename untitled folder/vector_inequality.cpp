
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(void)
// {
//     vector<int> a;
//     int n;
//     cin >> n;
//     if ((n > 0) && (n < 1001))
//     {
//         a.resize(n);
//         for (int q = 0; q < n; q++)
//         {
//             cin >> a[q];
//             if ((a[q] < 1) && (a[q] > 10001))
//                 return 0;
//         }
//         for (int q = n - 1; q >= 0; q--)
//         {
//             cout << a[q] << " ";
//         }
//     }
//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    int g = 0;
    vector<vector<int> > a1(n, vector<int>(3));
    for (int d = 0; d < n; d++)
    {
        for (int w = 0; w < 3; w++)
        {
            cin >> a1[d][w];
        }
        int c = 0;
        c = count(a1[d].begin(), a1[d].end(), 1);
        if (c >= 2)
        {
            g += 1;
        }
    }
    cout << g;
    // if(a1[0]>a1[1])
    // {
    //     cout<<".....";
    // }
    // else
    // {
    //     cout<<"???";
    // }
    return 0;
}
// }
// Long before the start the friends decided that they will implement a problem if at least two of them are sure about the solution. Otherwise, the friends won't write the problem's solution.

// This contest offers n problems to the participants. For each problem we know, which friend is sure about the solution. Help the friends find the number of problems for which they will write a solution.

// Input
// The first input line contains a single integer n (1 ≤ n ≤ 1000) — the number of problems in the contest. Then n lines contain three integers each, each integer is either 0 or 1. If the first number in the line equals 1, then Petya is sure about the problem's solution, otherwise he isn't sure. The second number shows Vasya's view on the solution, the third number shows Tonya's view. The numbers on the lines are separated by spaces.

// Output
// Print a single integer — the number of problems the friends will implement on the contest.