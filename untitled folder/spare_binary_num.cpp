// #include <iostream>
// using namespace std;

// int main(void)
// {
//     int number;
//     cin >> number;
//     int temp = 1;
//     int demo=2;
//     while (temp <number)
//     {
//         if (demo % 2 == 0)
//         {
//             temp = temp * 2;
//             demo++;
//         }
//         else
//         {
//             temp = 2 * temp + 1;
//             demo++;
//         }
//     }
//     if (temp == number)
//     {
//         cout << "1";
//     }
//     else
//     {
//         cout << "0";
//     }
//     return 0;
// }
 #include <iostream>
using namespace std;

int main(void)
{
    int number;
    cin >> number;
    int a = 3;
    bool what = true;
    if (number==2)
    what=true;
    else{
    while (a <= number)
    {
        int b = number & a;
        if (b == a)
        {
            what = false;
            break;
        }
        else
        {
            a <<= 1;
        }
    }
    }
    if (what)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
    return 0;
}