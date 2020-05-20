#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll m = 1000000007;

ll bigmod(ll base,ll pow)
{
    if(pow == 0) return 1;
    ll x = bigmod(base,pow/2);
    x = (x*x)%m;
    if(pow%2 != 0)
        x = (base*x)%m;
    return x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    ll ans = bigmod(3,3*n)-bigmod(7,n);
    while(ans < 0) ans += m;
    cout<<ans;
    return 0;
}
