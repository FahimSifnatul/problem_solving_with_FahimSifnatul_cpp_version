#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        bool check = 1;
        for(int i=0,j=n-1;i<j;i++,j--)
        {
            if(abs(s[i]-s[j]) == 2 or s[i] == s[j])continue;
            check = 0;
            break;
        }
        check ? cout<<"YES" : cout<<"NO";
        cout<<"\n";
    }
    return 0;
}








