#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main(void)
{
    cout << "hello utsav this is your lab project :))" << endl
         << "this is the code for m=n" << endl;
    vector<vector<double>> A;
    vector<vector<double>> w;
    vector<double> B;
    vector<double> error_vec;
    cout << "input the dimension of matrix A(m) mxn" << endl;
    int m;
    cin >> m;
    int n;
    cin >> n;
    vector<double> X;
    X.resize(m);
    error_vec.resize(m);
    vector<double> demo(m, 0);
    A.resize(m, vector<double>(m));
    w.resize(m, vector<double>(m));
    B.resize(m);
    cout << "enter the matrix A" << endl;
    double z;
    int m_iter;
    m_iter = m;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "give the matrix B" << endl;
    for (int j = 0; j < m; j++)
    {
        cin >> B[j];
    }
    m_iter = m;
    cout << "input the intial matrix X" << endl;
    for (int j = 0; j < m; j++)
    {
        cin >> X[j];
    }
    vector<int> temp;
    temp.resize(n);
    cout << "give the max error = 1e-7" << endl;
    double error = 1e-7;
    z = 0.0;
    int mask;
    int k = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        mask = i;
        int maskcopy = mask;
        int count = __builtin_popcount(mask);
        if (count == m)
        {
            for (int j = 0; j < n; j++)
            {
                temp[j] = maskcopy % 2;
                maskcopy /= 2;
            }
            for (int j = 0, k = 0; j < m; j++)
            {
                if (temp[k] == 1)
                {
                    w[i][j] = A[i][k++];
                }
            }
            for (int j=0;j<n;j++)
            {
                if (temp[j]==0) cout<<"x"<<j+1<<" = 0, ";
            }
            gauss(X, B, w);
        }
    }

    return 0;
}
void gauss(vector<double> X, vector<double> B, vector<vector<double>> w)
{
    while (1)
    {

        for (int i = 0; i < m; i++)
        {
            demo[i] = X[i];
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; (j < m); j++)
            {
                if (j != i)
                {
                    z += w[i][j] * X[j];
                }
            }
            X[i] = (B[i] - z) / w[i][i];
            // cout << "X" << i + 1 << " " << X[i] << endl;
            z = 0;
        }
        for (int i = 0; i < m; i++)
        {
            error_vec[i] = fabs(demo[i] - X[i]);
        }
        if (*max_element(error_vec.begin(), error_vec.end()) < error)
        {
            break;
        }
    }
    for (int i = 0; i < m; i++)
    {
        cout << "X" << i + 1 << " " << X[i] << endl;
    }
    return;
}