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

vector<int>v[200001], ans;
int n, dis[200001], p[200001];

void bfs()
{
	queue<int>q;
	q.push(1);
	dis[1] = 0;
	while(!q.empty())
	{
		int u = q.front();
		q.pop();
		int len = v[u].size();
		loopi(len)
		{
			if(!dis[v[u][i]] and v[u][i] != 1)
			{
				dis[v[u][i]] = dis[u] + 1;
				p[v[u][i]] = u;
				q.push(v[u][i]);
				ans.push_back(v[u][i]);
			}
		}
	}
}

int main()
{
    sf(n);
    loopi(n-1)
    {
		int x,y;
		sf(x), sf(y);
		v[x].push_back(y);
		v[y].push_back(x);	
	}
	int seq[n];
	loopi(n)
	{
		sf(seq[i]);
	}
	bfs();
	for(int i=1;i<n;i++)
	{
		if(dis[seq[i-1]] > dis[seq[i]])
		{
			p("no");
			ret;
		}
	}
	int i,j;
	i = 0, j = 1;
	while(j < n)
	{
		if(p[seq[j]] == seq[i])++j;
		else if(dis[seq[i]] < dis[seq[j]])++i;
		else
		{
			p("no");
			ret;
		}
	}
	p("yes");
    newline;
    ret;
}




















