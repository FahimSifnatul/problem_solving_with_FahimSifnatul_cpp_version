#include<bits/stdc++.h>
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
ll n, s, a[1005], mn = 10000000000, sum = 0, ans = 1;

ll bsearch(ll lo, ll hi)
{
    if(lo > hi) return ans;
    ll mid = (lo+hi) >> 1;
    if(sum - n*mid >= s)
    {
        ans = mid;
        bsearch(mid+1,hi);
    }
    else
    {
        bsearch(lo,mid-1);
    }
}

int main()
{
    sfl(n),sfl(s);
    loopi(n)
    {
        sfl(a[i]);
        mn = min(mn,a[i]);
        sum += a[i];
    }
    if(sum < s)
    {
        pf(-1);
        ret;
    }
    pfl(bsearch(0,mn));
    ret;
}

















