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
#define ret return 0

#define loopi(n) for(int i=0;i<n;i++)
#define loopd(n) for(int i=n-1;i>=0;i--)
int two[27];
void pow()
{
    two[0] = 1;
    two[1] = 2;
    for(int i=2;i<27;i++)
        two[i] = 2*two[i-1];
}

int main()
{
    int n,m;
    sf(n),sf(m);
    if(n > 26)
    {
        pf(m);
    }
    else
    {
        pow();
        pf(m%two[n]);
    }
    newline;
    return 0;
}














