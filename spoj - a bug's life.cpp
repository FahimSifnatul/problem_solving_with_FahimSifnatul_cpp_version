/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;

int bfs(int source,int level[],vector<int>node[])
{
 queue<int>q;
 level[source]=0;
 int flg;
 q.push(source);
 while(!q.empty())
 {
  int u,len;
  u=q.front();
  q.pop();
  len=node[u].size();
  if(level[u]==1)
    flg=0;
  else
    flg=1;
  for(int i=0;i<len;i++)
  {
      if(level[node[u][i]]==-1)
      {
          level[node[u][i]]=flg;
          q.push(node[u][i]);
      }
  }
 }
 q.push(source);
 while(!q.empty())
 {
     int u,len;
     u=q.front();
     q.pop();
     len=node[u].size();
     if(level[u]!=-2)
     flg=level[u];
     level[u]=-2;
     for(int i=0;i<len;i++)
     {
         if(level[node[u][i]]!=-2 and level[node[u][i]]!=flg)
            q.push(node[u][i]);
         else if(level[node[u][i]]!=-2 and level[node[u][i]]==flg)
            return -1;
     }
 }
 return 1;
}

int main()
{
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
     int n,m,a,b;
     scanf("%d%d",&n,&m);
     vector<int>v[n+1];
     int level[n+1];
     for(int i=0;i<m;i++)
     {
         scanf("%d%d",&a,&b);
         v[a].push_back(b);
         v[b].push_back(a);
     }
     int c;
     memset(level,-1,sizeof level);
     for(int i=1;i<=n;i++)
     {
        if(level[i]==-1)
        {
         c=bfs(i,level,v);
         if(c==-1)
          {
            printf("Scenario #%d:\nSuspicious bugs found!\n",cs);
            ++cs;
            break;
          }
        }
     }
     if(c==1)
     {
        printf("Scenario #%d:\nNo suspicious bugs found!\n",cs);
        ++cs;
     }
    }
}
