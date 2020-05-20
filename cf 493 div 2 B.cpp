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
    int n,b;
    sf(n),sf(b);
    int a[n],even = 0,odd = 0;
    loopi(n)
    {
        sf(a[i]);
        a[i]%2 ? ++odd : ++even;
    }
    if(odd != even)
    {
        pf(0);
        ret;
    }
    odd = even = 0;
    int len = 0;
    vector<int>v;
    loopi(n)
    {
        a[i]%2 ? ++odd : ++even;
        if(odd == even)
        {
            odd = even = 0;
            if(i < n-1)
                v.pb(abs(a[i]-a[i+1])),++len;
        }
    }
    sort(v.begin(),v.end());
    int cnt = 0;
    loopi(len)
    {
         if(b - v[i] >= 0)
         {
             b -= v[i];
             ++cnt;
         }
         else break;
    }
    pf(cnt);
    newline;
    return 0;
}














