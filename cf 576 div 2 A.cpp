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

int main()
{
    int n, x, y, temp, i=1, mi=1000000000, ans;
    sf(n), sf(x), sf(y);
    ans = x+i;
    int a[n+1];
    for(int l=1;l<=n;l++)
    {
        sf(a[l]);
        if(a[l] < mi)
        {
            mi = a[l];
            ans = l;
        }
    }
    while(true)
    {
        bool flg = true;
        if(x+i > n)
        {
            pf(ans);
            ret;
        }
        temp = a[x+i];
        for(int l=i;l<x+i and l<=n;l++)
            if(temp > a[l])
               flg = false;
        for(int l=x+i+1;l<=x+i+y and l<=n;l++)
            if(temp > a[l])
               flg = false;
        if(flg)
        {
            pf(x+i);
            ret;
        }
        ++i;

    }
    newline;
    ret;
}














