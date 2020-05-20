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
ll n,mb=0,mi=0,mr=0;

int main()
{
    sfl(n);
    ll b[n],I[n],r[n];
    loopi(n)
    {
        sfl(b[i]);
        mb = max(mb,b[i]);
    }
    loopi(n)
    {
        sfl(I[i]);
        mi = max(mi,I[i]);
    }
    loopi(n)
    {
        sfl(r[i]);
        mr = max(mr,r[i]);
    }
    int ans = 0;
    loopi(n)
    {
        if(b[i] < mb and I[i] < mi and r[i] < mr)
            ++ans;
    }
    pf(ans);
    newline;
    return 0;
}

















