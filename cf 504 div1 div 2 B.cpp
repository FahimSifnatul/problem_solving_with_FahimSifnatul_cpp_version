#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,k;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>k;
    if(k >= 2*n)
       cout<<0;
    else
    {
        ll t=k;
        if(t%2 == 0)--t;
        if(k<=n)cout<<t/2;
        else cout<<n-k/2;
    }
    return 0;
}
