#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int

#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)

#define sf(a) scanf("%d",&a)
#define sfl(a) scanf("%lld",&a)
#define sfd(a) scanf("%lf",&a)
#define sfs(a) scanf("%s",a)
#define sfc(a) scanf("%c",&a)
#define p(a) printf(a)
#define pf(a) printf("%d",a)
#define pfl(a) printf("%lld",a)
#define pfd(a) printf("%lf",a)
#define pfc(a) printf("%c",a)
#define pfs(a) printf("%s",s)
#define ci(a) cin>>a
#define co(a) cout<<a
#define pb(a) push_back(a)
#define newline printf("\n")
#define ret return 0

#define loopi(n) for(int i=0;i<n;i++)
#define loopd(n) for(int i=n-1;i>=0;i--)

int main()
{
    int n,mi = 1001,index = -1;
    sf(n);
    int a[n];
    loopi(n)
    {
        sf(a[i]);
        if(a[i] <= mi)
        {
            mi = a[i];
            index = i+1;
        }
    }
    if(n == 1 or (n == 2 and a[0] == a[1]))
    {
        pf(-1);
        ret;
    }
    pf(1);
    newline;
    pf(index);
    newline;
    return 0;
}

















