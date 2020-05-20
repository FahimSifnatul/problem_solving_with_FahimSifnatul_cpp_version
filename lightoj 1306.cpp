#include<cstdio>
#include<iostream>
using namespace std;

#define ll         long long int
#define ull        unsigned long long int
#define fastio     ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define sf(a)      scanf("%d",&a)
#define sfl(a)     scanf("%lld",&a)
#define sfd(a)     scanf("%lf",&a)
#define sfs(a)     scanf("%s",a)
#define sfc(a)     scanf("%c",&a)
#define p(a)       printf(a)
#define pf(a)      printf("%d",a)
#define pfl(a)     printf("%lld",a)
#define pfd(a)     printf("%lf",a)
#define pfc(a)     printf("%c",a)
#define pfs(a)     printf("%s",a)
#define ci(a)      cin>>a
#define co(a)      cout<<a
#define pb(a)      push_back(a)
#define newline    printf("\n")
#define ret        return 0
#define pi         acos(-1.0)
#define mod        1000000007

#define loopi(n) for(int i=0;i<n;i++)
#define loopd(n) for(int i=n-1;i>=0;i--)

ll egcd(ll a, ll b, ll *x, ll *y)
{
    if (b == 0)
    {
        *x = 1;
        *y = 0;
        return a;
    }
    ll x1, y1;
    ll gcd = egcd(b,a%b, &x1, &y1);
    *y = x1 - (a/b) * y1;
    *x = y1;
    return gcd;
}

int main()
{
    int t;
    sf(t);
    for(int i=1; i<=t; i++)
    {
        ll a, b, c, x1, x2, y1, y2;
        scanf("%lld%lld%lld%lld%lld%lld%lld", &a, &b, &c, &x1, &x2, &y1, &y2);
        ll x, y;
        ll gcd = egcd(a, b, &x, &y);
        if(c % gcd)
        {
            printf("Case %d: 0\n",i);
            continue;
        }
        a /= gcd;
        b /= gcd;
        c /= gcd;
        c *= -1;
        x *= c;
        y *= c;

    }
    newline;
    ret;
}



















