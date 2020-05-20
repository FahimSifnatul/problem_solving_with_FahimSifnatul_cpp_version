//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
int dis[1000][1000],n,m,k,sum=0;
bool check[1000][1000],vis[1000][1000];
struct val
{
    int x,y;
    val(int a,int b)
    {
        x=a;
        y=b;
    }
};
vector<val>node[1000][1000];

int bfs(int sx,int sy)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
           dis[i][j]=1000000000;
    int u,len;
    queue<val>q;
    dis[sx][sy]=0;
}

int main()
{
 scanf("%d%d%d",&n,&m,&k);
 char c;
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<m;j++)
     {
         scanf("%c ",&c);
         if(c=='#')check[i][j]=true;
         else
         {
             node[i][j].push_back(val(i,j));
         }
     }
 }
 int K[k][k];
 for(int i=0;i<k;i++)
    for(int j=0;j<k;j++)
        scanf("%d",K[i][j]);

 for(int i=0;i<n;i++)
 {
     for(int j=0;j<m;j++)
     {
         if(check[i][j]==false)
         {
           bfs(i,j);
           sort(K,K+n);
         }
     }
 }
}













