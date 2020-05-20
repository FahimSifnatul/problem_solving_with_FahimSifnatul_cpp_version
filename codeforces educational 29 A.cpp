//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s,temp="";
    cin>>s;
    int len=s.length();
    for(int i=len-1;i>=0;i--)
    {
        if(s[i]>'0') break;
        temp += s[i];
    }
    s = temp + s ;
    temp = s;
    reverse(s.begin(),s.end());
    if(s == temp)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}
