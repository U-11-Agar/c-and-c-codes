// #include <iostream>
// #include<iomanip>
// using namespace std;

// int main(void)
// {
//     int a;
//     long int b;
//     float deci3;
//     char q;
//     double deci9;
//     cin >> a >> b >> q >> deci3 >> deci9;
//     cout << a << endl
//          << b << endl
//          << q << endl
//          <<setprecision(3)
//          << deci9 << endl
//          <<fixed
//          <<setprecision(9)
//          << deci9 << endl;
//     return 0;
// }

#include <iostream>     
#include <iomanip>      
using namespace std;
int main () {
  cout << setfill ('*') << setw (10);
  cout << 15 << endl;
  cout << setfill ('#') << setw (5);
  cout << 5 << endl;
  cout << setfill ('#') << setw (5);
  cout << 1 << endl;
  cout << setfill ('*') << setw (10);
  cout << 25 << endl;
  return 0;
}

/*
#include <iostream>     
#include <iomanip>      
using namespace std;
int main () {
  cout << "The number printed with width 10"<<endl;
  cout << setw(10);
  cout << 77 << endl;
   
  cout << "The number printed with width 2"<<endl;
  cout << setw(2);
  cout << 10 << endl;
   
  cout << "The number printed with width 5"<<endl;
  cout << setw(5);
  cout << 25 << endl;
  return 0;
}
*/