#include<bits/stdc++.h>
using namespace std;

map<int, vector<int> > node;
deque<int>q;
map<int,int>level;
set<int>s;

int bfs(int x,int y,int *cs,int setsize)
{
 int u,v,cnt=0,se=setsize;
 q.push_back(x);
 level[x]=0;
 while(!q.empty())
 {
  u=q.front();
  q.pop_front();
  v=node[u].size();
  if(v==0)
    break;
  for(int i=0;i<v;i++)
  {
      if(level.count(node[u][i])==0)
      {
        level[node[u][i]]=level[u]+1;
        q.push_back(node[u][i]);
        --setsize;
        if(level[node[u][i]]>y)
            ++cnt;
      }
   }
 }
 if(node[x].size()==0)
    cnt+=setsize;
 else
    cnt+=setsize-1;
 printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",*cs,cnt,x,y);
   ++*cs;
 return 0;
}

int main()
{
    int edge,x,y,cs=1;
    while(scanf("%d",&edge)==1 and edge!=0)
    {
      for(int i=0;i<edge;i++)
      {
          scanf("%d %d",&x,&y);
          node[x].push_back(y);
          node[y].push_back(x);
          s.insert(x);
          s.insert(y);
      }
      int setsize=s.size();
      while(scanf("%d %d",&x,&y)==2)
      {
          if(x==0 and y==0)
            break;
          bfs(x,y,&cs,setsize);
          level.clear();
      }

      node.clear();
      s.clear();
       //for(int i=0;i<30;i++)
            //node[i].clear();
    }
}
