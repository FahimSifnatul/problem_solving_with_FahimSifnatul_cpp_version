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
int n, temp;

struct val
{
    int node, pos;
};

bool cmp(val a, val b)
{
    return a.node == b.node ? a.pos < b.pos : a.node < b.node;
}

int main()
{
    sf(n);
    n <<= 1;
    val a[n];
    for(int i=0;i<n;i++)
    {
        sf(a[i].node), a[i].pos = i;
    }
    sort(a,a+n,cmp);
    ll ans = 0;
    int pos1 = 0, pos2 = 0;
    for(int i=0;i<n;i+=2)
    {
        if(abs(pos1-a[i].pos)+abs(pos2-a[i+1].pos) <= abs(pos1-a[i+1].pos)+abs(pos2-a[i].pos))
        {
            ans += abs(pos1-a[i].pos)+abs(pos2-a[i+1].pos);
            pos1 = a[i].pos;
            pos2 = a[i+1].pos;
        }
        else
        {
            ans += abs(pos1-a[i+1].pos)+abs(pos2-a[i].pos);
            pos1 = a[i+1].pos;
            pos2 = a[i].pos;
        }
    }
    pfl(ans);
    newline;
    ret;
}





















