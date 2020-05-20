//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
bool vis[100005],cat[100005];
vector<int>leaves;
int m;

int bfs(vector<int>node[],int cnt[])
{
    int u,len;
    vis[1]=true;
    queue<int>q;
    q.push(1);
    if(cat[1]==true)cnt[1]=1;
    else cat[1]=0;
    while(!q.empty())
    {
      u=q.front();
      q.pop();
      len=node[u].size();
      if(len==1)
        leaves.push_back(u);
      for(int i=0;i<len;i++)
      {
          if(vis[node[u][i]]==false)
          {
              vis[node[u][i]]=true;
              q.push(node[u][i]);
              if(cat[node[u][i]]==true and cat[u]==true) cnt[node[u][i]]=cnt[u]+1;
              else if(cat[node[u][i]]==true and cnt[u]<=m) cnt[node[u][i]]=1;
              else if(cat[node[u][i]]==true and cnt[u]>m) cnt[node[u][i]]=cnt[u];
              else cnt[node[u][i]]=cnt[u];
          }
      }
    }
    return 0;
}

int main()
{
    int n,n1,n2;
    scanf("%d%d",&n,&m);
    vector<int>node[n+1];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&n1);
        if(n1==1)cat[i]=true;
    }
    for(int i=0;i<n-1;i++)
    {
        scanf("%d%d",&n1,&n2);
        node[n1].push_back(n2);
        node[n2].push_back(n1);
    }
    int cnt[n+1];
    memset(cnt,0,sizeof cnt);
    bfs(node,cnt);
    int len=leaves.size();
    int count=0;
    for(int i=0;i<len;i++)
    {
        if(leaves[i]!=1)
        {
            if(cnt[leaves[i]]<=m)
                ++count;
                //cout<<leaves[i]<<' ';
        }
    }
    cout<<count<<endl;
    return 0;
}










