#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

int main(void)
{
    // srand(time(NULL));
    cout<<time(NULL);
    // system("g++ change_color.cpp -o change");
    // system("./a.out");
    // // system("");
    // system("cd .. && open -a safari && pwd");
    // cout<<"\x1b[35;42m this was how to change the colour XD \x1b[0m";
    // int arr[1]= {rand()%30};
    // cout<<endl<<arr[0];
    return 0;
}
/*
for mac
 referred this link Open Application In C but its not a cross platform one. 
I came to know that system command is used with open to launch any application from mac.
For Example:- open -a "Google chrome" through terminal and if wanted in c/c++
 program it will be system("open -a 'Google chrome'"); .
But how to open any installed application in linux? Or Windows? 
and how to make it cross platform c/c
++?? i know based on macros we can identify OS and execute respective commands based on OS. 
But i want to know to open application in linux and windows?

Sample code:

#include<iostream>
#include<cstdlib>

int main(){
    system("open -a 'Google chrome'");
    return 0;
}
for windows
void Start Program(string filename)

{

ShellExecute(NULL, "open", filename.c_str(),NULL, NULL,SW_SHOWNORMAL);
}
*/