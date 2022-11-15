#include <iostream>
#include <vector>
using namespace std;

class anitalk
{
public:
    bool online;
    vector<int> off_frd;
    vector<int> on_frd;
};

void add(anitalk user[], int a[])
{
    if (user[a[0] - 1].online)
    {
        user[a[1] - 1].on_frd.insert(user[a[1] - 1].on_frd.begin(), a[0] - 1);
        user[a[1] - 1].on_frd.shrink_to_fit();
    }
    else
    {
        user[a[1] - 1].off_frd.insert(user[a[1] - 1].off_frd.begin(), a[0] - 1);
        user[a[1] - 1].off_frd.shrink_to_fit();
    }

    if (user[a[1] - 1].online)
    {
        user[a[0] - 1].on_frd.insert(user[a[0] - 1].on_frd.begin(), a[1] - 1);
        user[a[0] - 1].on_frd.shrink_to_fit();
    }
    else
    {
        user[a[0] - 1].off_frd.insert(user[a[0] - 1].off_frd.begin(), a[1] - 1);
        user[a[0] - 1].off_frd.shrink_to_fit();
    }
}
void del(anitalk user[], int a[])
{
    if (user[a[0] - 1].online)
    {
        for (int d = 0; d < user[a[1] - 1].on_frd.size(); d++)
        {
            if (user[a[1] - 1].on_frd[d] == (a[0] - 1))
            {
                user[a[1] - 1].on_frd.erase(user[a[1] - 1].on_frd.begin() + d);
                user[a[1] - 1].on_frd.shrink_to_fit();
                break;
            }
        }
    }
    else
    {
        for (int d = 0; d < user[a[1] - 1].off_frd.size(); d++)
        {
            if (user[a[1] - 1].off_frd[d] == (a[0] - 1))
            {
                user[a[1] - 1].off_frd.erase(user[a[1] - 1].on_frd.begin() + d);
                user[a[1] - 1].off_frd.shrink_to_fit();
                break;
            }
        }
    }
    if (user[a[1] - 1].online)
    {
        for (int d = 0; d < user[a[0] - 1].on_frd.size(); d++)
        {
            if (user[a[0] - 1].on_frd[d] == (a[1] - 1))
            {
                user[a[0] - 1].on_frd.erase(user[a[0] - 1].on_frd.begin() + d);
                user[a[0] - 1].on_frd.shrink_to_fit();
                break;
            }
        }
    }
    else
    {
        for (int d = 0; d < user[a[0] - 1].off_frd.size(); d++)
        {
            if (user[a[0] - 1].off_frd[d] == (a[1] - 1))
            {
                user[a[0] - 1].off_frd.erase(user[a[0] - 1].on_frd.begin() + d);
                user[a[0] - 1].off_frd.shrink_to_fit();
                break;
            }
        }
    }
}
void online(anitalk user[])
{
    int d;
    cin >> d;
    int g;
    for (int a = 0; a < user[d - 1].off_frd.size(); a++)
    {
        g = user[d - 1].off_frd[a];
        user[g].on_frd.insert(user[g].on_frd.begin(), d - 1);
        for (int x = 0; x < user[g].off_frd.size(); x++)
        {
            if (user[g].off_frd[x] == d - 1)
            {
                user[g].off_frd.erase(user[g].off_frd.begin() + x);
                user[g].off_frd.shrink_to_fit();
                break;
            }
        }
    }
    for (int a = 0; a < user[d - 1].on_frd.size(); a++)
    {
        g = user[d - 1].on_frd[a];
        user[g].on_frd.insert(user[g].on_frd.begin(), d - 1);
        for (int x = 0; x < user[g].off_frd.size(); x++)
        {
            if (user[g].off_frd[x] == d - 1)
            {
                user[g].off_frd.erase(user[g].off_frd.begin() + x);
                user[g].off_frd.shrink_to_fit();
                break;
            }
        }
    }
}
void offline(anitalk user[])
{
    int d;
    cin >> d;
    int g;
    for (int a = 0; a < user[d - 1].on_frd.size(); a++)
    {
        g = user[d - 1].on_frd[a];
        user[g].on_frd.insert(user[g].off_frd.begin(), d - 1);
        for (int x = 0; x < user[g].on_frd.size(); x++)
        {
            if (user[g].on_frd[x] == d - 1)
            {
                user[g].on_frd.erase(user[g].on_frd.begin() + x);
                user[g].on_frd.shrink_to_fit();
                break;
            }
        }
    }
    for (int a = 0; a < user[d - 1].off_frd.size(); a++)
    {
        g = user[d - 1].on_frd[a];
        user[g].off_frd.insert(user[g].off_frd.begin(), d - 1);
        for (int x = 0; x < user[g].on_frd.size(); x++)
        {
            if (user[g].on_frd[x] == d - 1)
            {
                user[g].on_frd.erase(user[g].on_frd.begin() + x);
                user[g].on_frd.shrink_to_fit();
                break;
            }
        }
    }
}
int main(void)
{
    int n, m, q, o;
    cin >> n >> m >> q;
    cin >> o;
    anitalk user[n];
    vector<int> cout_;
    int h = 0;
    int a[2];
    for (int d = 0; d < o; d++)
    {
        int e;
        cin >> e;
        user[e - 1].online = true;
    }
    for (int d = 0; d < m; d++)
    {
        cin >> a[0] >> a[1];
        add(user, a);
    }
    for (int d = 0; d < q; d++)
    {
        char input;
        cin >> input;
        switch (input)
        {
        case 'O':
        {
            online(user);
            break;
        }
        case 'F':
        {
            offline(user);
            break;
        }
        case 'A':
        {

            cin >> a[0] >> a[1];
            add(user, a);
            break;
        }
        case 'D':
        {
            cin >> a[0] >> a[1];
            del(user, a);
            break;
        }
        case 'C':
        {
            int c;
            h += 1;
            cout_.resize(h);
            cin >> c;
            cout_[h - 1] = user[c - 1].on_frd.size();
            break;
        }
        }
    }
    for (int d = 0; d < h; d++)
    {
        cout << cout_[d] << endl;
    }
    return 0;
}