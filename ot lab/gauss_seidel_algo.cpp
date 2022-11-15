#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main(void)
{
    cout << "hello utsav this is your lab project :))" << endl
         << "this is the code for m=n" << endl;
    vector<vector<double> > A;
    vector<double> B;
    vector<double> error_vec;
    cout << "input the dimension of matrix A(m)" << endl;
    int m;
    cin >> m;
    vector<double> X;
    X.resize(m);
    error_vec.resize(m);
    vector<double> demo(m, 0);
    A.resize(m, vector<double>(m));
    B.resize(m);
    cout << "enter the matrix A" << endl;
    double z;
    int m_iter;
    m_iter = m;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
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
    cout << "give the max error = 1e-7" << endl;
    double error = 1e-7;
    z = 0.0;
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
                    z += A[i][j] * X[j];
                }
            }
            X[i] = (B[i] - z) / A[i][i];
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
    for(int i=0; i<m;i++)
    {
        cout << "X" << i + 1 << " " << X[i] << endl;
    }
    return 0;
}
