#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a,b,x,z,o;
    cin>>a>>b>>x;
    string s;
    for(int i=0;i<x;i++)
    {
        if(i%2 == 0)
        s += "0",--a;
        else s += "1",--b;
    }
    string zero="",one="";
    for(int i=0;i<a;i++)
    {
        zero += "0";
    }
    for(int i=0;i<b;i++)
    {
        one += "1";
    }
    cout<<a<<' '<<b<<endl;
    int len = s.size();
    for(int i=0;i<len;i++)
    {
        if(s[i] == '0')
        {
            s.insert(i,zero);
            break;
        }
    }
    len = s.size();
    for(int i=0;i<len;i++)
    {
        if(s[i] == '1')
        {
            s.insert(i,one);
            break;
        }
    }
    cout<<s;
    return 0;
}

/*
100
100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100 100
*/

