// One dragon. Two dragon. Three dragon», — the princess was counting. She had trouble falling asleep, and she got bored of counting lambs when she was nine.

// However, just counting dragons was boring as well, so she entertained herself at best she could. Tonight she imagined that all dragons were here to steal her, and she was fighting them off. Every k-th dragon got punched in the face with a frying pan. Every l-th dragon got his tail shut into the balcony door. Every m-th dragon got his paws trampled with sharp heels. Finally, she threatened every n-th dragon to call her mom, and he withdrew in panic.

// How many imaginary dragons suffered moral or physical damage tonight, if the princess counted a total of d dragons?

// Input
// Input data contains integer numbers k, l, m, n and d, each number in a separate line (1 ≤ k, l, m, n ≤ 10, 1 ≤ d ≤ 105).

// Output
// Output the number of damaged dragons.
#include <iostream>
using namespace std;
int main(void)
{
    int k, l, m, n, d;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;
    // if(1<=(k,l,n,m)<=10)
    // {
    //     return 0;
    // } this a wroung format
    if ((k >10)||(k<1) || (l >10)||(l<1) || (m >10)||(m<1) || (n >10)||(n<1)||(d<1)||(d>100001))
    {
        return 0;
    }
    int a = 0;
    for (int q = 1; q <= d; q++)
    {
        if ((q % k == 0) || (q % l == 0) || (q % m == 0) || (q % n == 0))
        {
            a += 1;
        }
    }
    cout << a;
    return 0;
}