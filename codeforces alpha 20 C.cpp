/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;
priority_queue<int>q;

int dijkstra()
{

}

int main()
{
    int n,m,a,b,c;
    scanf("%d%d",&n,&m);
    vector<int>node[n+1],cost[n+1];
    int dis[n+1],parent[n+1];
    for(int i=1;i<=n;i++)
        dis[i]=10e7;
    for(int i=0;i<m;i++)
    {
       scanf("%d%d%d",&a,&b,&c);
       node[a].push_back(b);
       node[b].push_back(a);
       cost[a].push_back(c)
       cost[b].push_back(c);
    }
    dijkstra();
}











