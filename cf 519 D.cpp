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
#define pfs(a)     printf("%s",s)
#define ci(a)      cin>>a
#define co(a)      cout<<a
#define pb(a)      push_back(a)
#define newline    printf("\n")
#define ret        return 0
#define pi         acos(-1.0)
#define mod        1000000007

#define loopi(n) for(int i=0;i<n;i++)
#define loopd(n) for(int i=n-1;i>=0;i--)
ll ans = 0,tmp;
int a[11][100001],pos[100001];
bool ok[100001];

int main()
{
    int n,m;
    sf(n),sf(m);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            sfl(tmp);
            if(i == 1)
                pos[tmp] = j, a[i][j] = j;
            else
            {
                int id = pos[tmp];
                a[i][id] = j;
                if(id == 1)
                {
                    if(a[i][id+1] and a[i][id+1] - a[i][id] != 1)
                        ok[id] = 1;
                }
                else if(id == n)
                {
                    if(a[i][id-1] and a[i][id] - a[i][id-1] != 1)
                        ok[id-1] = 1;
                }
                else
                {
                    if(a[i][id+1] and a[i][id+1] - a[i][id] != 1)
                        ok[id] = 1;
                    if(a[i][id-1] and a[i][id] - a[i][id-1] != 1)
                        ok[id-1] = 1;
                }
            }
        }
    }
    ok[n] = 1;
    tmp = 0;
    for(int i=1;i<=n;i++)
    {
        if(ok[i])
        {
            tmp = i - tmp;
            ans += (tmp*(tmp+1)) >> 1;
            tmp = i;
        }
    }
    pfl(ans);
    newline;
    ret;
}
