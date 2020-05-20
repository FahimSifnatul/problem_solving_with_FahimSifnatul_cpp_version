#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int

#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)

#define sf(a) scanf(" %d ",&a)
#define sfl(a) scanf(" %lld ",&a)
#define sfd(a) scanf(" %lf ",&a)
#define sfs(a) scanf("%s",a)
#define p(a) printf(a)
#define pf(a) printf("%d",a)
#define pfl(a) printf("%lld",a)
#define pfd(a) printf("%lf",a)
#define pfc(a) printf("%c",a)
#define pfs(a) printf("%s",s)
#define sfc(a) scanf("%c ",&a)
#define ci(a) cin>>a
#define co(a) cout<<a
#define pb(a) push_back(a)
#define newline printf("\n")
#define ret return 0

#define loopi(n) for(int i=0;i<n;i++)
#define loopd(n) for(int i=n-1;i>=0;i--)

#define check TX>1 and TX<n and TY>1 and TY<m
#define check2 a[tx+dx[i]][ty+dy[i]] == '*'
int n,m,q,x,y;
int ans[1005][1005];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
char a[1005][1005];

struct val
{
    int x,y;
    val(int a,int b)
    {
        x = a;
        y = b;
    }
};
vector<val>v;

int bfs(int x,int y)
{
    int cnt = 0;
    ans[x][y] = 1;
    queue<val>q;
    q.push(val(x,y));
    while(!q.empty())
    {
        int tx = q.front().x;
        int ty = q.front().y;
        q.pop();
        for(int i=0;i<4;i++)
        {
            if(check2)++cnt;
        }
        for(int i=0;i<4;i++)
        {
             int TX = tx+dx[i], TY = ty+dy[i];
             if(check)
             {
                 if(a[TX][TY] == '.' and ans[TX][TY] == 0)
                 {
                     ans[TX][TY] = 1;
                     q.push(val(TX,TY));
                 }
             }
        }
    }

    ans[x][y] = cnt;
    q.push(val(x,y));
    while(!q.empty())
    {
        int tx = q.front().x;
        int ty = q.front().y;
        q.pop();
        for(int i=0;i<4;i++)
        {
             int TX = tx+dx[i], TY = ty+dy[i];
             if(check)
             {
                 if(a[TX][TY] == '.' and ans[TX][TY] == 1)
                 {
                     ans[TX][TY] = cnt;
                     q.push(val(TX,TY));
                 }
             }
        }
    }
}

int main()
{
    fastio;
    ci(n),ci(m),ci(q);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            ci(a[i][j]);
            if(a[i][j] == '.')
                v.pb(val(i,j));
        }
    }
    int len = v.size();
    loopi(len)
    {
        if(!ans[v[i].x][v[i].y])
        {
           bfs(v[i].x,v[i].y);
        }
    }
    loopi(q)
    {
        ci(x),ci(y);
        co(ans[x][y]);
        co('\n');
    }
    return 0;
}














