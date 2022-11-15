#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int n;
int m;
vector<long double> z_coffi;
vector<vector<long double> >  x_const;

void input_z_coffi(void)
{
    z_coffi.resize(n+m,0);
    cout<<"give the cofficient of the objective function"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>z_coffi[i];
    }
    return;
}

void input_x_const(void)
{
    x_const.resize()
}



int main(void)
{
printf("this is the new code or the correct methode of simplex methode\n");
cout<<"give the no. of free variable in your problem"<<endl;
cin>>n;
cout<<"give the no of equation with <= or >= in the constraints equation"<<endl;
cin>>m;
input_z_coffi();
input_x_const();

}
