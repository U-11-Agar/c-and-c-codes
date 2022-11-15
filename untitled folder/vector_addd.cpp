#include <iostream>
using namespace std;
class vector_add
{
    static int sumx;
    static int sumy;
    static int sumz;

public:
    void getvector()
    {
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        vector_sum(x, y, z);
    }
    void vector_sum(int x, int y, int z)
    {
        sumx += x;
        sumy += y;
        sumz += z;
    }
    void return_r()
    {
        if ((sumx == 0) && (sumy == 0) && (sumz == 0))
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
};
int vector_add ::sumx;
int vector_add ::sumy;
int vector_add ::sumz;
int main(void)
{
    int a;
    cin >> a;
    vector_add p[a];
    for (int q = 0; q < a; q++)
    {
        p[q].getvector();
        cout << endl;
        if (q == a - 1)
        {
            p[a - 1].return_r();
        }
    }
    return 0;
}