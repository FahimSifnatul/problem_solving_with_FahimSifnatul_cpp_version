#include<bits/stdc++.h>
using namespace std;

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
    int n,m;
    sf(n),sf(m);
    int a[n],b[m];
    loopi(n)sf(a[i]);
    loopi(m)sf(b[i]);
    int ans = 0;
    for(int i=0,j=0;i<n and j<m;)
    {
        if(b[j] >= a[i])
            ++ans,++i,++j;
        else ++i;
    }
    pf(ans);
    newline;
    return 0;
}

















