#include<bits/stdc++.h>
using namespace std;
#define sieve_limit 100003
vector<int>prime;
bool check[sieve_limit+5];
int b[sieve_limit+5];

int sieve()
{
 int len = sqrt(sieve_limit)+1;
 for(int i=3;i<=len;i+=2)
 {
     if(check[i] == false)
     {
         for(int j=i*i;j<=sieve_limit;j+=2*i)
            check[j] = true;
     }
 }
 b[2] = 2;
 for(int i=3;i<=sieve_limit;i+=2)
 {
    if(check[i] == false)
        b[i] = i;
 }
 for(int i=sieve_limit-1;i>=0;i--)
 {
    if(b[i] == 0)
        b[i] = b[i+1];
 }
}

int main()
{
    ios_base::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    sieve();
    int ans = INT_MAX,temp;
    for(int i=0;i<n;i++)
    {
        temp = 0;
        for(int j=0;j<m;j++)
        {
           temp += b[a[i][j]] - a[i][j];
        }
        ans = min(ans,temp);
    }
    for(int i=0;i<m;i++)
    {
        temp = 0;
        for(int j=0;j<n;j++)
        {
           temp += b[a[j][i]] - a[j][i];
        }
        ans = min(ans,temp);
    }
    ans == INT_MAX ? cout<<0 : cout<<ans ;
    cout<<endl;
    return 0;
}












