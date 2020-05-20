#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,m,i,j;
 while(scanf("%d %d",&n,&m))
 {
     if(n==0 and m==0)
        break;
     vector<int>outdegree[n+1];
     int indegree[n+1];
     memset(indegree,0,sizeof indegree);
     for(int l=0;l<m;l++)
     {
         scanf("%d%d",&i,&j);
         outdegree[i].push_back(j);
         ++indegree[j];
     }
     queue<int>q,topsort;

     for(int l=1;l<=n;l++)
      {
          if(indegree[l]==0)
          {
           q.push(l);
          }
      }
     int len,u;
     while(!q.empty())
     {
      u=q.front();
      q.pop();
      topsort.push(u);
      len=outdegree[u].size();
      for(int j=0;j<len;j++)
      {
        --indegree[outdegree[u][j]];
        if(indegree[outdegree[u][j]]==0)
            q.push(outdegree[u][j]);
      }
     }
     while(!topsort.empty())
     {
         cout<<topsort.front();
         topsort.pop();
         if(!topsort.empty())
            cout<<' ';
     }
     cout<<'\n';
     for(int i=1;i<=n;i++)
        outdegree[i].clear();
 }
 return 0;
}
