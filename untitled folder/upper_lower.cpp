// // Vasya is very upset that many people on the Net mix uppercase and lowercase letters in one word.
// That's why he decided to invent an extension for his favorite browser that would change the letters' register in every word so that it either only consisted of lowercase letters or, vice versa, only of uppercase ones.
//  At that as little as possible letters should be changed in the word. For example, the word HoUse must be replaced with house, and the word ViP — with VIP.
//  If a word contains an equal number of uppercase and lowercase letters, you should replace all the letters with lowercase ones.
//  For example, maTRIx should be replaced by matrix. Your task is to use the given method on one given word.

// // Input
// // The first line contains a word s — it consists of uppercase and lowercase Latin letters and possesses the length from 1 to 100.

// // Output
// // Print the corrected word s. If the given word s has strictly more uppercase letters, make the word written in the uppercase register, otherwise - in the lowercase one.
#include <iostream>
#include <string>
#include<cctype>
using namespace std;
bool isul(string& w);
void upper(string& s);
void lower(string& s);
int main(void)
{
    string s;
    cin >> s;
    bool q;
    q = isul(s);
    if (q == true)
    {
        lower(s);
    }
    else
    {
        upper(s);
    }
    cout << s << endl;
    return 0;
}
bool isul(string& w)
{
    int x = 0;
    for (int q = 0; q < w.length(); q++)
    {
        if (islower(w[q]))
        {
            x += 1;
        }
        else
        {
            x -= 1;
        }
    }
    if (x >= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void upper(string& s)//to pass string we have to use string& syntax
{
    for (int q = 0; q < s.length(); q++)
    {
        char temp = toupper(s[q]);
        s[q] = temp;
    }
}
void lower(string& s)
{
    for (int q = 0; q < s.length(); q++)
    {
        char temp = tolower(s[q]);
        s[q] = temp;
    }
}