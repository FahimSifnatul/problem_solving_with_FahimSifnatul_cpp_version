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
int res,ans[50005],cnt[100005],a[100005];
struct val
{
    int i,l,r,b;
};

bool cmp(val x,val y)
{
    return x.b == y.b ? x.r < y.r : x.b < y.b;
}

void add(int i)
{
    ++cnt[a[i]];
    if(cnt[a[i]] == 1)++res;
}

void remove(int i)
{
    --cnt[a[i]];
    if(cnt[a[i]] == 0)--res;
}

int main()
{
    int t;
    sf(t);
    for(int j=1;j<=t;j++)
    {
        int n,q,k;
        sf(n),sf(q);
        k = sqrt(n);
        for(int i=1;i<=n;i++)sf(a[i]);
        val query[q];
        memset(cnt,0,sizeof cnt);
        loopi(q)
        {
            sf(query[i].l),sf(query[i].r);
            query[i].i = i;
            query[i].b = query[i].l/k;
        }
        sort(query,query+q,cmp);
        int left = 1, right = 0;
        res = 0;
        loopi(q)
        {
            while(left > query[i].l)add(--left);
            while(left < query[i].l)remove(left++);
            while(right > query[i].r)remove(right--);
            while(right < query[i].r)add(++right);
            ans[query[i].i] = res;
        }
        printf("Case %d:\n",j);
        loopi(q)
            pf(ans[i]),newline;
    }
    ret;
}














