// #include <iostream>
// #include <vector>
// #include <cmath>
// using namespace std;

// void seat_all(vector<vector<int> > &seat, vector<vector<int> > &want, int d, int o, int m, int x, int y);

// int main(void)
// {
//     int n, m, k;
//     cin >> n >> m >> k;
//     vector<vector<int> > seat;
//     seat.resize(n, vector<int>(m, 0));
//     /*
//     We create a 2D vector containing "n"
//     elements each having the value "vector<int> (m, 0)".
//     "vector<int> (m, 0)" means a vector having "m"
//     elements each of value "0".
//     Here these elements are vectors.
//     */
//     vector<vector<int> > want;
//     want.resize(k, vector<int>(2));
//     for (int d = 0; d < k; d++)
//     {
//         cin >> want[d][0];
//         cin >> want[d][1];
//     }
//     seat[want[0][0] - 1][want[0][1] - 1] = 1;
//     cout << want[0][0] << " " << want[0][1] << endl;
//     int x = 0;
//     int y = 0;
//     for (int d = 1; d < k; d++)
//     {
//         if (seat[want[d][0] - 1][want[d][1] - 1] == 1)
//         {
//             seat_all(seat, want, d, n, m, x, y);
//         }
//         else
//         {
//             seat[want[d][0] - 1][want[d][1] - 1] = 1;
//             cout<<want[d][0]<<" "<<want[d][1]<<endl;
//         }
//     }
//     return 0;
// }
// void seat_all(vector<vector<int> > &seat, vector<vector<int> > &want, int d, int o, int m, int x, int y)
// {
//     x = want[d][0] - 1;
//     y = want[d][1] - 1;
//     int n = 1;
//     while (1)
//     {
//         int f = -n;
//         for (int e = f; e <= n; e++)
//         {
//             if (((x + e) >= 0) || ((x + e) < o))
//             {
//                 if ((n - abs(e)) == 0)
//                 {
//                     if (seat[x + e][y] == 0)
//                     {
//                         want[d][0] += (e + 1);
//                         seat[want[d][0] - 1][want[d][1] - 1] = 1;
//                         cout << want[d][0] << " " << want[d][1] << endl;
//                         return;
//                     }
//                 }
//                 else
//                 {
//                     int s = -(n - abs(e));
//                     if ((y + s) >= 0)
//                     {
//                         if (seat[x + e][y + s] == 0)
//                         {
//                             want[d][0] += (e + 1);
//                             want[d][1] += (s + 1);
//                             seat[want[d][0] - 1][want[d][1] - 1] = 1;
//                             cout << want[d][0] << " " << want[d][1] << endl;
//                             return;
//                         }
//                     }
//                     int a = (n - abs(e));
//                     if ((y + a) < m)
//                     {
//                         if (seat[x + e][y + a] == 0)
//                         {
//                             want[d][0] += (e + 1);
//                             want[d][1] += (a + 1);
//                             seat[want[d][0] - 1][want[d][1] - 1] = 1;
//                             cout << want[d][0] << " " << want[d][1] << endl;
//                             return;
//                         }
//                     }
//                 }
//             }
//         }
//         n += 1;
//     }
// }
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<vector<int> > seat;
vector<vector<int> > want;
void seat_all(int d, int o, int m)
{
    int x = want[d][0] - 1;
    int y = want[d][1] - 1;
    int n = 1;
    while (1)
    {
        for (int s, a, e = -n; e <= n; e++)
        {
            if (((x + e) >= 0) || ((x + e) < o))
            {
                s = -(n - abs(e));
                if (s == 0)
                {
                    if (seat[x + e][y] == 0)
                    {
                        want[d][0] = (e + x + 1);
                        return;
                    }
                }
                else
                {
                    if (((y + s) >= 0) || ((y - s) < m))
                    {
                        if (seat[x + e][y + s] == 0)
                        {
                            want[d][0] = (e + x + 1);
                            want[d][1] = (y + s + 1);
                            return;
                        }
                        else if (seat[x + e][y - s] == 0)
                        {
                            want[d][0] = (e + x + 1);
                            want[d][1] = (y - s + 1);
                            return;
                        }
                    }
                }
            }
        }
        n += 1;
    }
}
int main(void)
{
    int n, m, k;
    cin >> n >> m >> k;
    seat.resize(n, vector<int>(m, 0));
    want.resize(k, vector<int>(2));
    for (int d = 0; d < k; d++)
    {
        cin >> want[d][0] >> want[d][1];
    }
    for (int d = 0; d < k; d++)
    {
        if (seat[want[d][0] - 1][want[d][1] - 1] == 1)
        {
            seat_all(d, n, m);
            seat[want[d][0] - 1][want[d][1] - 1] = 1;
            cout << want[d][0] << " " << want[d][1] << endl;
        }
        else
        {
            seat[want[d][0] - 1][want[d][1] - 1] = 1;
            cout << want[d][0] << " " << want[d][1] << endl;
        }
    }
    return 0;
}
