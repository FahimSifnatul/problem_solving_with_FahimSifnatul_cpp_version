//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;

class comp
{
public:
    bool operator()(int a,int b)
    {
        return a<b;
    }
};

int dijkstra(int dis[],int parent[],vector<int>node[],vector<int>cost[],int n)
{
 int u,len;
 dis[1]=0;
 for(int i=1;i<=n;i++)
    dis[i]=10e7;
 priority_queue<int,vector<int>,comp>q;
 q.push(1);
 while(!q.empty())
 {
  u=q.top();
  q.pop();
  len=node[u].size();
  for(int i=0;i<len;i++)
  {
      if(dis[u]+cost[u][node[u][i]]<dis[node[u][i]])
      {
          dis[node[u][i]]=dis[u]+cost[u][node[u][i]];
          parent[node[u][i]]=u;
          q.push(node[u][i]);
      }
  }
 }
}

int main()
{
    int n,m,x,y,w;
    scanf("%d%d",&n,&m);
    int distance[n+1],parent[n+1];
    vector<int>node[n+1],cost[n+1];
    while(m--)
    {
        scanf("%d%d%d",&x,&y,&w);
        node[x].push_back(y);
        node[y].push_back(x);
        cost[x][y]=w;
        cost[y][x]=w;
    }
    dijkstra(distance,parent,node,cost,n);
    cout<<distance[n];
    return 0;
}
