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
#define pfs(a)     printf("%s",s)
#define ci(a)      cin>>a
#define co(a)      cout<<a
#define pb(a)      push_back(a)
#define newline    printf("\n")
#define ret        return 0
#define pi         acos(-1.0)
#define mod        1000000007

#define loopi(n) for(int i=0;i<n;i++)
#define loopd(n) for(int i=n-1;i>=0;i--)

int main()
{
    int t;
    sf(t);
    for(int i=1;i<=t;i++)
    {
        int n,sumi = 0,sumd = 0,mx = -99999;
        sf(n);
        int a[n];
        loopi(n)
        {
            sf(a[i]);
            sumi += a[i];
            sumd += a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(mx < sumi)mx = sumi;
            sumi -= a[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            if(mx < sumd)mx = sumd;
            sumd -= a[i];
        }
        printf("Case %d: %d\n",i,mx);
    }
    ret;
}












