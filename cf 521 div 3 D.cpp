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
int cnt[200005];

struct node
{
    int cumsum, val, cnt;
    node(int x, int y)
    { val = x, cnt = y; }
};
vector<node>v;

bool cmp(val a, val b)
{
    return a.cnt > b.cnt;
}

int bsearch(int left,int right)

int main()
{
    int n,k,len=0,mx;
    sf(n),sf(k);
    loopi(n)
    {
        int tmp;
        sf(tmp);
        ++cnt[tmp];
    }
    loopi(200005)
    {
        if(cnt[i] > 0)
            v.pb(node(i,cnt[i])),++len;
    }
    sort(v.begin(),v.end(),cmp);
    loopi(n)
    {
        if(i == 0)
            mx = v[i].cumsum = v[i].cnt;
        else
            v[i].cumsum = v[i].val + v[i-1].cumsum;
    }
    for(int i=mx;i>0;i--)
    {
        bsearch()
    }
    newline;
    ret;
}














