#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;

int check(string s,int n)
{
    for(int i=2;i<n;i++)
    {
        if(s[i] == s[i-1] and s[i-1] == s[i-2] and s[i] == '0')
            return 0;
    }
    if(s[n-1] == s[n-2] and s[n-1] == '0')return 0;
    else if(s[0] == s[1] and s[0] == '0')return 0;;
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,one=0;
    string s;
    cin>>n>>s;
    if(n == 1)
    {
        s == "1" ? cout<<"YES" : cout<<"NO";
        return 0;
    }
    else if(n == 2)
    {
        s == "10" or s == "01" ? cout<<"YES" : cout<<"NO";
        return 0;
    }
    for(int i=1;i<n;i++)
    {
        if(s[i] == s[i-1] and s[i] == '1')
        {
            cout<<"NO\n";
            return 0;
        }
    }
    check(s,n) ? cout<<"YES" : cout<<"NO";
    return 0;
}








