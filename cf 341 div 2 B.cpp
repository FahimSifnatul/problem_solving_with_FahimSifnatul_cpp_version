#include<bits/stdc++.h>
using namespace std;
#define ll int
ll NCR[1005],a[1005][1005];

ll ncr(ll n,ll r)
{
    if(n == r)return 1;
    if(r == 1)return n;
    if(NCR[n] != 0)return NCR[n];
    return ncr(n-1,r) + ncr(n-1,r-1);
}

int row_diagonals()
{
    ll ans = 0,cnt = 0,n=1000,m=1000;
    for(int i=2;i<m;i++)
    {
        cnt = 0;
        for(int j=1,k=i;j<n and k<=m;j++,k++)
        {
            if(a[j][k] == 1)++cnt;
        }
        if(cnt > 1) ans += NCR[cnt];
    }
    for(int i=2;i<n;i++)
    {
        cnt = 0;
        for(int j=i,k=1;j<=n and k<m;j++,k++)
        {
            if(a[j][k] == 1)++cnt;
        }
        if(cnt > 1) ans += NCR[cnt];
    }
    return ans;
}

int col_diagonals()
{
    ll ans = 0,cnt = 0,n=1000,m=1000;
    for(int i=n-1;i>1;i--)
    {
        cnt = 0;
        for(int j=1,k=i;j<n and k>0;j++,k--)
        {
            if(a[j][k] == 1)++cnt;
        }
        if(cnt > 1) ans += NCR[cnt];
    }
    for(int i=2;i<m;i++)
    {
        cnt = 0;
        for(int j=n,k=i;j>1 and k<=m;j--,k++)
        {
            if(a[j][k] == 1)++cnt;
        }
        if(cnt > 1) ans += NCR[cnt];
    }
    return ans;
}

int main_diagonals()
{
    ll ans = 0,cnt = 0,n=1000,m=1000;
    for(int i=1;i<1001;i++)
    {
       if(a[i][i] == 1)++cnt;
    }
    if(cnt > 1)ans += NCR[cnt];
    cnt = 0;
    for(int i=n,j=1;i>0;i--,j++)
    {
        if(a[i][j] == 1)++cnt;
    }
    if(cnt > 1)ans += NCR[cnt];
    return ans;
}

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        a[x][y] = 1;
    }
    for(ll i=2;i<1001;i++)
    {
        NCR[i] = ncr(i,2);
    }
    NCR[1] = 0;
    ll ans=0;
    ans += row_diagonals();
    ans += col_diagonals();
    ans += main_diagonals();
    printf("%d\n",ans);
    return 0;
}




















