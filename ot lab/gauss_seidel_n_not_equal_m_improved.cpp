#include <iostream>
#include <math.h>
#include <vector>
#include<stdlib.h>
#include<algorithm>
// #include<bits/stdc++.h>

using namespace std;

#define error 1e-7;
void gauss(vector<double> B, vector<vector<double> > w, int m)
{
    double z = 0.0;
    vector<double> X(m,0);
    vector<double> error_vec;
    error_vec.resize(m);
    vector<double> demo(m, 0);
   
    for (int i = 0; i < m; i++)
    {
        cout << "X" << i + 1 << " " << X[i] << endl;
    }
    return;
}


int main(void)
{
    cout << "hello Babuwolf this is your lab project :))" << endl
         << "this is the code for gauss seidel methode in with m!=n" << endl;
    vector<vector<double> > A;
    vector<vector<double> > w;
    vector<double> B;
    int m;
    int n;
    cout << "input the dimension of matrix A(m*n) mxn" << endl;
    cin >> m >> n;
    A.resize(m, vector<double>(n));
    w.resize(m, vector<double>(m));
    B.resize(m);
    cout << "enter the matrix A" << endl;
    double z;
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
    cout << "input the intial matrix X is taken as 0" << endl;
    vector<int> temp;
    temp.resize(n);
    cout << "give the max error = 1e-7" << endl;
    z = 0.0;
    unsigned long mask;
    for (unsigned long i = 0; i < (1 << n); i++)
    {
        mask = i;
        int maskcopy = mask;
        long int count = __builtin_popcount(mask);
        if (count == m)
        {
            int k = 0;
            for (int j = 0; j < n; j++)
            {
                temp[j] = maskcopy & 1;
                maskcopy = maskcopy>>1;
            }
            for (int j = 0; j < m; j++)
            {
                while(k<n)
                {
                    if (temp[k] == 1)
                    {
                        w[i][j] = A[i][k];
                        k++;
                        break;
                    }
                    else
                    {
                        k+=1;
                    }
                }
            }
            gauss(B, w, m);
        }
    }
    return 0;
}

// printf("this is babuwolf nd u r welcome to my machine\n");
// while(1)
// {

// }

