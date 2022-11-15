#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    int row, col;
    cin >> row >> col;
    for (int d = 0; d < row; d++)
    {
        cout <<left<< setfill('*') << setw(col) <<"#"<<endl;
    }
    return 0;
}
/*
#include <iostream>
#include <iomanip>
#include <locale>
 
int main()
{
    std::cout.imbue(std::locale("en_US.utf8"));
 
    std::cout << "Default positioning:\n" << std::setfill('*')
              << std::setw(12) << -1.23  << '\n'
              << std::setw(12) << std::hex << std::showbase << 42 << '\n'
              << std::setw(12) << std::put_money(123, true) << "\n\n";
 
    std::cout << "Left positioning:\n" << std::left
              << std::setw(12) << -1.23  << '\n'
              << std::setw(12) << 42 << '\n'
              << std::setw(12) << std::put_money(123, true) << "\n\n";
 
    std::cout << "Internal positioning:\n" << std::internal
              << std::setw(12) << -1.23  << '\n'
              << std::setw(12) << 42 << '\n'
              << std::setw(12) << std::put_money(123, true) << "\n\n";
 
    std::cout << "Right positioning:\n" << std::right
              << std::setw(12) << -1.23  << '\n'
              << std::setw(12) << 42 << '\n'
              << std::setw(12) << std::put_money(123, true) << '\n';
}
*/
// CPP Program to print
// pattern using std::setw and std::fill
// #include <iostream>
// #include <iomanip> // std::setfill, std::setw
 
// int main()
// {
//     int n = 5;
//     for (int i = 1; i <= n; i++) {
//         std::cout << std::left << std::setfill(' ') << std::setw(n);
//         std::cout << std::string(i, '*') << std::endl;
//     }
// }