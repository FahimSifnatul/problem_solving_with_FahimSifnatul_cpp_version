//bismillahir rahmanir rahim
//solved by row major order
#include<bits/stdc++.h>
using namespace std;
int n,m,k,temp,sum=0;
char c;
bool check[1000000];
queue<int>q;

int bfs(int src,int dis[],vector<int>node[])
{
 int u,len;
 dis[src]=0;
 q.push(src);
 while(!q.empty())
 {
     u=q.front();
     q.pop();
     len=node[u].size();
     for(int i=0;i<len;i++)
     {
         if(dis[node[u][i]]==1000000000 and check[node[u][i]]==false)
         {
             dis[node[u][i]]=dis[u]+1;
             sum+=dis[node[u][i]];
             q.push(node[u][i]);
         }
     }
 }
 return 0;
}

int main()
{
 scanf("%d%d%d",&n,&m,&k);
 int K[k];
 vector<int>node[n*m];
 char c[n][m];
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<m;j++)
     {
         temp=m*i+j;
         scanf(" %c",&c[i][j]);
         if(c[i][j]=='#')check[temp]=true;
     }
 }
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<m;j++)
     {
          temp=m*i+j;
          if(temp-m>=0 and check[temp-m]==false)
          {
              node[temp].push_back(temp-m);
              node[temp-m].push_back(temp);
          }
          if(temp+m<=n*m-1 and check[temp+m]==false)
          {
              node[temp].push_back(temp+m);
              node[temp+m].push_back(temp);
          }
          if(temp+1!=m*(i+1) and check[temp+1]==false)
          {
              node[temp].push_back(temp+1);
              node[temp+1].push_back(temp);
          }
          if(temp-1!=m*i-1 and check[temp-1]==false)
          {
              node[temp].push_back(temp-1);
              node[temp-1].push_back(temp);
          }
     }
 }
 temp=n*m;
 int x1,y1,dis[temp];
 for(int i=0;i<temp;i++)
 dis[i]=1000000000;
 for(int i=0;i<k;i++)
 {
     scanf("%d%d",&x1,&y1);
     --x1;
     --y1;
     K[i]=m*x1+y1;
     dis[K[i]]=0;
     q.push(K[i]);
 }
         bfs(K[0],dis,node);
 cout<<sum<<endl;
 return 0;
}




/*
6 6 2
.....#
.###.#
...#.#
.#####
.....#
######
3 5
5 3
*/



