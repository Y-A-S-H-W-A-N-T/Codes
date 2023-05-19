#include <bits/stdc++.h>

using namespace std;

int main()
{
    string password = "madhu";
    int len = password.length();
    map<char,int> change;
    change['a'] = 7;
    change['b'] = 8;
    change['c'] = 9;
    change['d'] = 10;
    change['e'] = 11;
    change['f'] = 12;
    change['g'] = 13;
    change['h'] = 14;
    change['i'] = 15;
    change['j'] = 16;
    change['k'] = 17;
    change['l'] = 18;
    change['m'] = 19;
    change['n'] = 20;
    change['o'] = 21;
    change['p'] = 22;
    change['q'] = 23;
    change['r'] = 24;
    change['s'] = 25;
    change['t'] = 26;
    change['u'] = 27;
    change['v'] = 28;
    change['w'] = 29;
    change['x'] = 30;
    change['y'] = 31;
    change['z'] = 32;

    map<char,int> :: iterator itr;
    int encrypt_password[len];
    for(int i=0;i<len;i++)
    {
        for(itr=change.begin();itr!=change.end();itr++)
        {
            if(((*itr).first)==password[i])
            {
                encrypt_password[i]=(*itr).second;
            }
        }
    }
    for(int i=0;i<len;i++)
    {
        cout<<encrypt_password[i];
    }
}
