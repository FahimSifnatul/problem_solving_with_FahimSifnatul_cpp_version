#include<bits/stdc++.h>
using namespace std;
vector<int>shortest;

struct val
{
    int node,cost;
    val(int a,int b)
    {
        node=a;
        cost=b;
    }
};

struct comp
{
    bool operator()(const val& a,const val& b)
    {
        return a.cost<b.cost;//descending order
    }
};

void dijkstra(int dis[],vector<val>data[],int n)
{
    int u,len;
    dis[1]=0;
    priority_queue<val,vector<val>,comp>q;
    q.push(val(1,0));
    while(!q.empty())
    {
        u=q.top().node;
        q.pop();
        len=data[u].size();
        for(int i=0;i<len;i++)
        {
            if(dis[u]+data[u][i].cost<dis[data[u][i].node])
            {
               if(data[u][i].node==n)
                shortest.push_back(dis[data[u][i].node]);
               dis[data[u][i].node]=dis[u]+data[u][i].cost;
               q.push(val(data[u][i].node,dis[data[u][i].node]));
            }
        }
    }
}

int main()
{
 int t,cs=0,n,m;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%d%d",&n,&m);
  int n1,n2,c;
  vector<val>data[n+1];
  int dis[n+1];
  for(int i=0;i<=n;i++)
    dis[i]=10e7;
  for(int i=0;i<m;i++)
  {
    scanf("%d%d%d",&n1,&n2,&c);
    data[n1].push_back(val(n2,c));
    data[n2].push_back(val(n1,c));
  }
  dijkstra(dis,data,n);
  sort(shortest.begin(),shortest.end());
  printf("Case %d: %d\n",++cs,shortest[1]);
  shortest.clear();
 }
}














