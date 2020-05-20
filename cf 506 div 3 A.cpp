#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;

int main()
{
    ios_base::sync_with_stdio(false);
    int n,m,index;
    string s,temp="";
    cin>>n>>m>>s;
    index = n;
    for(int i=1;i<n;i++)
    {
        if(s.substr(0,i) == s.substr(n-i,i))
        {
               index = n-i;
        }
    }
    string period ="";
    for(int i=0;i<index;i++)
        period += s[i];
    for(int i=1;i<m;i++)
        temp += period;
    cout<<temp + s;
    return 0;
}























