#include<cstdio>
#include<queue>
#include<vector>
#include<cstring>
using namespace std;

#define ll         long long int
#define ull        unsigned long long int
#define fastio     ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define sf(a)      scanf("%d",&a)
#define sfl(a)     scanf("%lld",&a)
#define sfd(a)     scanf("%lf",&a)
#define sfs(a)     scanf("%s",a)
#define sfc(a)     scanf(" %c",&a)
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
#define check    dx[i]+tx<=n and dx[i]+tx>=1 and dy[i]+ty<=n and dy[i]+ty>=1 and !des[dx[i]+tx][dy[i]+ty] and a[dx[i]+tx][dy[i]+ty] == '0'
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int n, x1, y1, x2, y2;
char a[51][51];

struct val
{
    int x,y;
    val(int a, int b)
    { x = a, y = b; }
};
vector<val>v1,v2;;

int bfs(int x, int y, int flg)
{
    bool des[51][51];
    memset(des,0,sizeof des);
    des[x][y] = true;
    flg == 1 ? v1.push_back(val(x,y)) : v2.push_back(val(x,y));
    queue<val>q;
    q.push(val(x,y));
    while(!q.empty())
    {
        val u = q.front();
        q.pop();
        int tx = u.x;
        int ty = u.y;
        for(int i=0;i<4;i++)
        {
            if(check)
            {
                des[dx[i]+tx][dy[i]+ty] = true;
                flg == 1 ? v1.push_back(val(dx[i]+tx,dy[i]+ty)) : v2.push_back(val(dx[i]+tx,dy[i]+ty));
                q.push(val(dx[i]+tx,dy[i]+ty));
            }
        }
    }
    ret;
}

int main()
{
    sf(n);
    sf(x1),sf(y1);
    sf(x2),sf(y2);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            sfc(a[i][j]);
        }
    }
    bfs(x1,y1,1);
    bfs(x2,y2,2);
    int len1 = v1.size(), len2 = v2.size(), ans = 5000;
    for(int i=0;i<len1;i++)
    {
        for(int j=0;j<len2;j++)
        {
            ans = min(ans,(v1[i].x-v2[j].x)*(v1[i].x-v2[j].x)+(v1[i].y-v2[j].y)*(v1[i].y-v2[j].y));
        }
    }
    pf(ans);
    newline;
    ret;
}















