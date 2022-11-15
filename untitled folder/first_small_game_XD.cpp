#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(void)
{
    cout << "Hello\nplease enter your name:";
    string name;
    cin >> name;
    cout << "Hello again " << name << " do you want to test your luck? \n[Y/N]:";
    char yn;
    cin>>yn;
    if (yn == 'y' || yn == 'Y')
    {
        cout << "\nYour luck tester is your computer!!\nRules of the game is like this that the coumputer will choose a ramdom humber from 0 to 5 and you have to guess the number if the number matches your luck is good.";
        int number, number_c;
        srand(time(NULL));
        number_c = rand() % 6;
        cout << "\nenter the number:"<<endl;
        cin >> number;
        if (number == number_c)
        {
            cout << "\x1b[34;45mlucky human next time you will be mine\x1b[0m";
        }
        else
        {
            cout << "luck is far away go get some";
            return 0;
        }
    }
    else
    {
        return 0;
    }
    return 0;
}