// Chef has 3
//  boxes of sizes A
// , B
// , and C
//  respectively. He puts the boxes in bags of size D
//  (A≤B≤C≤D
// ). Find the minimum number of bags Chef needs so that he can put each box in a bag. A bag can contain more than one box if the sum of sizes of boxes in the bag does not exceed the size of the bag.

// Input Format
// The first line contains T
//  denoting the number of test cases. Then the test cases follow.
// Each test case contains four integers A
// , B
// , C
// , and D
//  on a single line denoting the sizes of the boxes and bags.
// Output Format
// For each test case, output on a single line the minimum number of bags Chef needs.

// Constraints
// 1≤T≤100
// 1≤A≤B≤C≤D≤100
#include <iostream>
using namespace std;
int main(void)
{
    int T;
    cin >> T;
    if ((T < 1) || (T > 100))
    {
        return 0;
    }
    while (T != 0)
    {
        int a, b, c, d;
        int bag = 0;
        cin >> a >> b >> c >> d;
        if ((a >= 1) || (a <= b) ||(b <= c)|| (c <= d) || (d <= 100))
        {
            if (c < d)
            {
                if (b + c == d)
                {
                    bag += 1;
                }
                if (b + c < d)
                {
                    if (a + b + c <= d)
                    {
                        bag = 1;
                    }
                    // if (a + b + c == d)
                    // {
                    //     bag = 1;
                    // }
                    if (a + b + c > d)
                    {
                        bag = 2;
                    }
                }
                if (b + c > d)
                {
                    if (a + c <= d)
                    {
                        bag = 2;
                    }

                    else
                    {
                        bag = 1;
                        if (b < d)
                        {
                            if (b + a <= d)
                            {
                                bag += 1;
                            }

                            if (b + a > d)
                            {
                                bag = 3;
                            }
                        }
                        else
                        {
                            bag = 3;
                        }
                    }
                }
            }
            else
            {
                bag = 1;
                if (b < d)
                {
                    if (b + a <= d)
                    {
                        bag += 1;
                    }

                    if (b + a > d)
                    {
                        bag = 3;
                    }
                }
                else
                {
                    bag = 3;
                }
            }
        }
        else 
        {
        T -= 1;
            continue;
        }
        cout << bag << endl;
        
    }
    return 0;
}
// int bagcount(int a[], int)
// {
//     int bag = 0;
// }