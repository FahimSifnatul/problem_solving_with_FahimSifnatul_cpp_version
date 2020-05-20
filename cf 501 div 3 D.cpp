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

int main()
{
    ll n,k,s;
    sfl(n),sfl(k),sfl(s);
    if(s > k*(n-1) or k > s)
    {
        co("NO");
        ret;
    }
    co("YES");
    newline;
    ll pos1 = 1,pos2 = 1+s/k,pos = pos1, cnt = 0;
    while(cnt < k)
    {
        if(cnt == k-1)
        {
            if(pos - s > 0)
                pfl(pos - s);
            else pfl(pos + s);
        }
        else
        {
            if(pos == pos1)
                pfl(pos2),pos = pos2;
            else
                pfl(pos1),pos = pos1;
        }
        ++cnt;
        s -= (pos2 - pos1);
        pfc(' ');
    }
    newline;
    ret;
}










