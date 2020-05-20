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
vector<int>v[1005];
int temp;

int main()
{
    int n;
    sf(n);
    loopi(n-1)
    {
        sf(temp);
        v[temp].pb(i+2);
    }
    for(int i=1;i<=n;i++)
    {
        int len = v[i].size();
        if(len > 0 and len < 3)
        {
            co("NO");
            ret;
        }
        else if(len >= 3)
        {
            int cnt = 0;
            for(int j=0;j<len;j++)
            {
                int a = v[i][j];
                if(v[v[i][j]].size() == 0)
                    ++cnt;
            }
            if(cnt <3)
            {
                co("NO");
                ret;
            }
        }
    }
    co("YES");
    newline;
    return 0;
}














