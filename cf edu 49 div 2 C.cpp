#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int

#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)

#define sf(a) scanf("%d",&a)
#define sfl(a) scanf("%lld ",&a)
#define sfd(a) scanf("%lf ",&a)
#define sfs(a) scanf("%s ",a)
#define sfc(a) scanf("%c ",&a)
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
int t,n,temp;

int main()
{
    sf(t);
    while(t--)
    {
        sf(n);
        int pa[2];
        map<int,int>check;
        vector<int>v;
        int len = 0;
        bool ok = false;
        loopi(n)
        {
            sf(temp);
            ++check[temp];
            if(!ok)
            {
                if(check.find(temp)->second == 4)
                {
                     pa[0] = pa[1] = temp;
                     ok = true;
                }
                else if(check.find(temp)->second == 2)
                {
                     v.pb(temp);
                     ++len;
                }
            }
        }
        if(ok)
        {
            printf("%d %d %d %d\n",pa[0],pa[0],pa[1],pa[1]);
            continue;
        }
        sort(v.begin(),v.end());
        double mi = 10001.00;
        for(int i=1;i<len;i++)
        {
            double ok =(double) max(v[i],v[i-1])*1.00/min(v[i],v[i-1]);
            if(ok < mi)
            {
                mi = ok;
                pa[0] = v[i],pa[1] = v[i-1];
            }
        }
        printf("%d %d %d %d\n",pa[0],pa[0],pa[1],pa[1]);
    }
    newline;
    return 0;
}













