#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];

int update(string s,string t,int n,int m)
{
    if(m > n)return 0;
    string temp;
    int T;
    for(int i=0;i<n-m+1;i++)
    {
        if(s.substr(i,m) == t)
        {
            ++a[i][i+m-1];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           a[i][j] += a[i][j-1];
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=i;j>0;j--)
        {
           a[j-1][i] += a[j][i];
        }
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m,q;
    cin>>n>>m>>q;
    string s,t;
    cin>>s>>t;
    s = s;
    update(s,t,n,m);
    for(int i=0;i<q;i++)
    {
        int u,v;
        cin>>u>>v;
        cout<<a[u-1][v-1];
        cout<<endl;
    }
    return 0;
}









