#include<iostream>
#include<stdlib.h>
// #include<window.h>
// #include<conio.h>
using namespace std;

int main(void)
{
    for (int d=30;d<38;d++)
    {
        // system("Color E4");
        cout<<" \x1b[30;43m how r u \x1b[0m "<<endl;
    }
    return 0;
}
/*
+---------+------------+------------+
|  color  | foreground | background |
|         |    code    |    code    |
+---------+------------+------------+
| black   |     30     |     40     |
| red     |     31     |     41     |
| green   |     32     |     42     |
| yellow  |     33     |     43     |
| blue    |     34     |     44     |
| magenta |     35     |     45     |
| cyan    |     36     |     46     |
| white   |     37     |     47     |
+---------+------------+------------+
Here is an example:

printf("\x1b[32m green text on regular background \x1b[0m  \n");
printf("\x1b[32;40m green text on black background \x1b[0m  \n");
printf("\x1b[42m regular text on green background \x1b[0m  \n");
*/