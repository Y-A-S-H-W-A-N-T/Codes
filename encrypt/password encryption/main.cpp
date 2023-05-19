#include <bits/stdc++.h>

using namespace std;

int main()
{
    string password = "password";
    int len = password.length();
    char key[26];
    key[0]='a';
    key[1]='b';
    key[2]='c';
    key[3]='d';
    key[4]='e';
    key[5]='f';
    key[6]='g';
    key[7]='h';
    key[8]='i';
    key[9]='j';
    key[10]='k';
    key[11]='l';
    key[12]='m';
    key[13]='n';
    key[14]='o';
    key[15]='p';
    key[16]='q';
    key[17]='r';
    key[18]='s';
    key[19]='t';
    key[20]='u';
    key[21]='v';
    key[22]='w';
    key[23]='x';
    key[24]='y';
    key[25]='z';
    char value[26];
    value[0]='9';
    value[1]='8';
    value[2]='7';
    value[3]='6';
    value[4]='5';
    value[5]='4';
    value[6]='3';
    value[7]='2';
    value[8]='1';
    value[9]='0';
    value[10]='!';
    value[11]='@';
    value[12]='#';
    value[13]='$';
    value[14]='&';
    value[15]='^';
    value[16]='%';
    value[17]='*';
    value[18]='-';
    value[19]='+';
    value[20]='|';
    value[21]='`';
    value[22]='~';
    value[23]='?';
    value[24]='<';
    value[25]='>';
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<26;j++)
        {
            if(password[i]==key[j])
            {
                password[i]=value[j];
            }
        }
    }
    cout<<password<<endl;
}
