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

struct node
{
    int i;
    ll val;
};

bool cmp(node a,node b)
{
    return a.val < b.val;
}

int main()
{
    int n,cnt = 0;
    sf(n);
    node a[n];
    loopi(n)sfl(a[i].val), a[i].i = i+1;
    if(n == 1 or n == 2)
    {
        pf(0);
        ret;
    }
    sort(a,a+n,cmp);
    ll b[n];
    b[0] = a[0].val;
    for(int i=1;i<n;i++)
        b[i] = a[i].val + b[i-1];
    vector<int>v;
    for(int i=0;i<n-1;i++)
    {
        if(b[n-2] - a[i].val == a[n-1].val)
            v.pb(a[i].i);
    }
    if(a[n-2].val == b[n-3])
    {
        v.pb(a[n-1].i);
    }
    int len = v.size();
    pf(len),newline;
    loopi(len)pf(v[i]),p(" ");
    newline;
    ret;
}
















