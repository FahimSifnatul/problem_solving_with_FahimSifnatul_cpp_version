#include<bits/stdc++.h>
using namespace std;

#define ll long long int

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

#define loopi(n,temp,ma,mp) for(int i=0;i<n;i++){sf(temp);ma = max(ma,++mp[temp]);}
#define loopd(n) for(int i=n-1;i>=0;i--)
#define inf 1000000005
map<int,int>mp;
int n,temp,ma = 1;

int main()
{
    sf(n);
    loopi(n,temp,ma,mp)
    pf(n-ma);
    newline;
    return 0;
}









