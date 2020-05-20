#include<bits/stdc++.h>
using namespace std;

int main()
{
    int flag=0,len;
    string s;
    getline(cin,s);
    len=s.length();
    for(int i=0;i<len;i++)
    {
       if(s[i]=='H' or s[i]=='Q' or s[i]=='9')
       {
           ++flag;
           break;
       }
    }
    if(flag>0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;

}
