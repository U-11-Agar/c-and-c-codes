#include <iostream>
#include <cmath>
using namespace std;
void update(int *a, int *b)
{
    int temp;
    temp = *a + *b;
    *b = abs(*a - *b);
    *a = temp;
}
int main(void)
{
    int a, b;
    int *pa = &a, *pb = &b;
    cin >> a;
    cin >> b;
    update(pa, pb);
    cout << a << endl
         << b;
    return 0;
}