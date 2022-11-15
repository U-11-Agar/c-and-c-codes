#include<iostream>
using namespace std;

int main (void)
{
    int number;
    cin>>number;
    // int a=3;
    long long int a,temp;
    temp=1;
    a=3;
    int b=number-2;
    while(b>0)
    {
        if(b&1)
        {
            temp*=a;
        }
        a*=a;
        b=b>>1;
    }
    cout<<temp<<" "<<a<<" ";
cout<<number*(number-1)*temp;
return 0;
}
// output is input (number) *(number-1)*(3^(number-2)) but only using bit wise operator "">>""
/*
#import<cmath>
int main(void){
    int num;
    cin>>num;
    cout<<num*(num-1)*pow(3,(num-2));
return 0;
}
num-2 was deduced by me**********************************



*/