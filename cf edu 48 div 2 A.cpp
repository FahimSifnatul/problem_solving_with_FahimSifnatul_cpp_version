#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    int n,m;
    scanf("%d%d",&n,&m);
    ll a[n],ans = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        ans += a[i];
        a[i] = ans/m;
        ans %= m;
    }
    for(int i=0;i<n;i++)
        printf("%lld ",a[i]);
    return 0;
}














