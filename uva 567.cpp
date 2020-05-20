#include<bits/stdc++.h>
using namespace std;
vector<int>node[21];
int level[21];
deque<int>q;

int bfs(int x,int y)
{
    memset(level,-1,sizeof level);
    int u,v,dest;
    level[x]=0;
    q.push_back(x);
    while(!q.empty())
    {
     u=q.front();
     q.pop_front();
     v=node[u].size();
     for(int i=0;i<v;i++)
     {
      if(level[node[u][i]]==-1)
      {
          level[node[u][i]]=level[u]+1;
          q.push_back(node[u][i]);
      }
     }
    }
    printf("%2d to %2d:%2d\n",x,y,level[y]);
    return 0;
}

int main()
{
 int n,cs=1;
   int x,y;
 while(cin>>x)
 {
  int flg=0;

  for(int i=1;i<=19;i++)
  {
   if(i>1)
   scanf("%d",&x);
   while(x--)
   {
     scanf("%d",&y);
     node[i].push_back(y);
     node[y].push_back(i);
   }
  }
  scanf("%d",&n);
  while(n--)
  {
   scanf("%d %d",&x,&y);
   if(flg==0)
   printf("Test Set #%d\n",cs);
   ++flg;
   bfs(x,y);
  }
  printf("\n");
  ++cs;
  for(int i=1;i<=20;i++)
    node[i].clear();
 }
 return 0;
}
