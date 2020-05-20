//bismillahir rahmanir rahim
// not a good problem on dsu i think. it is a problem mainly on dfs/bfs;
#include<bits/stdc++.h>
using namespace std;
int cnt=0;

void makeset(int parent[],int n)
{
    for(int i=1;i<=n;i++)
        parent[i]=i;
}

int find(int n,int parent[])
{
    if(parent[n]==n)return n;
    else return parent[n]=find(parent[n],parent);
}

int Union(int n1,int n2,int parent[])
{
    int u=find(n1,parent);
    int v=find(n2,parent);
    if(u!=v)
    {
        parent[v]=u;
    }
}

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int parent[n+1];
    makeset(parent,n);
    int n1,n2;
    while(m--)
    {
        scanf("%d%d",&n1,&n2);
        Union(n1,n2,parent);
    }
    //int cnt=0;
    //for(int i=1;i<=n;i++)
       // if(parent[i]!=)
       cout<<cnt;
}






