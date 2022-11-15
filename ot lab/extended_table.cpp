#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

typedef class vector_
{
    public:
    vector<vector<long double>> x;
    vector<long double> z;
    vector<long double> constant;
    vector<char> inequality;
    vector<long double> slack;
    vector<long double> surplus;
    vector<long double> artificial;
    vector<long double> z_modi;
} table;

void matrix_input(table *h, int m, int n)
{
    cout << "input the constraind equation\n";
    h->x.resize(m);
    h->inequality.resize(m);
    for (int i = 0; i < m; i++)
    {
        h->x[i].resize(n, 0);
        for (int j = 0; j < n; j++)
        {
            cin >> h->x[i][j];
        }
        cout << "input the inquality sign > for (> and >=) AND < for (< and <=)\n";
        cin >> h->inequality[i];
        cout << "input the constant for this equation\n";
        cin >> h->constant[i];
    }
}

void variable_initial(table *h,int n,int m)
{
    for(int i=0;i<m;i++)
    {
        if()
    }

}

void print_table(table *h, int n, int m)
{
    
}

int main(void)
{
    table h;
    int n; // no of variable
    int m; // no of eqation
    cout << "input the no of variable in the objective function (n) and no of constrained (m)" << endl;
    cin >> n >> m;
    h.z.resize(n + m, 0);
    int max_min;
    cout << "MAX(0) min(1)" << endl;
    cin >> max_min;
    cout << "input the objective fn";
    for (int i = 0; i < n; i++)
    {
        cin >> z[i];
        if (max_min == 1)
        {
            z[i] = -1 * z[i];
        }
    }
    matrix_input(&h, m, n);
    return 0;
}