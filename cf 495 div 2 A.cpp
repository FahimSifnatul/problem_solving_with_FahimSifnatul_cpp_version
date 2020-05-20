#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int

#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)

#define sf(a) scanf("%d",&a)
#define sfl(a) scanf("%lld",&a)
#define sfd(a) scanf("%lf",&a)
#define sfs(a) scanf("%s",a)
#define pf(a) printf("%d",a)
#define pfl(a) printf("%lld",a)
#define pfd(a) printf("%lf",a)
#define pfc(a) printf("%c",a)
#define pfs(a) printf("%s",s)
#define ci(a) cin>>a
#define co(a) cout<<a
#define pb(a) push_back(a)
#define newline printf("\n")

#define loopi(n) for(int i=0;i<n;i++)
#define loopd(n) for(int i=n-1;i>=0;i--)

int main()
{
    ll n,d;
    sfl(n);
    sfl(d);
    ll a[n];
    set<ll>st;
    loopi(n)
    {
        sfl(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        ll l = a[i]-d, g = a[i]+d;
        bool ok = 1;
        for(int j=0;j<n;j++)
        {
            if(abs(a[j]-l) < d)
            {
                ok = 0;
                break;
            }
        }
        if(ok == 1)st.insert(l);
        ok = 1;
        for(int j=0;j<n;j++)
        {
            if(abs(g-a[j]) < d)
            {
                ok = 0;
                break;
            }
        }
        if(ok == 1)st.insert(g);
    }
    pf(st.size());
    newline;
    return 0;
}










