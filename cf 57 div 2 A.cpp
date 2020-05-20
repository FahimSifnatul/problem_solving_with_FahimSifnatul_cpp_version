#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string a,b,s="";
    cin>>a>>b;
    int len = a.size();
    for(int i=0;i<len;i++)
    {
        if(a[i] == b[i])s += '0';
        else s += '1';
    }
    cout<<s;
    return 0;
}





