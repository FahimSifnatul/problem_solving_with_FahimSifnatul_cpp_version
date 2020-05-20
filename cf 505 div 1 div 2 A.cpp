#include<bits/stdc++.h>
using namespace std;
int a[26];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,check=1;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        check = max(check,++a[s[i]-'a']);
    }
    check > 1 or n == 1 ? cout<<"YES" : cout<<"NO";
    cout<<endl;
    return 0;
}
