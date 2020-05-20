//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
int cnt=0;

struct val
{
    int n1,n2,c;
    val(int a,int b,int w)
    {
        n1=a;
        n2=b;
        c=w;
    }
};

bool comp(const val& a,const val& b)
{
    return a.c<b.c;
}

int find(int node,int parent[])
{
    if(parent[node]==node)return node;
    else
    {
        parent[node]=find(parent[node],parent);
        return parent[node];
    }
}

void Union(val node,int parent[])
{
    int u=find(node.n1,parent);
    int v=find(node.n2,parent);
    if(u!=v)
    {
        parent[v]=u;
        cnt+=node.c;
    }
}

int main()
{
 int n,m,n1,n2,c;
 scanf("%d%d",&n,&m);
 vector<val>node;
 for(int i=0;i<m;i++)
 {
     scanf("%d%d%d",&n1,&n2,&c);
     node.push_back(val(n1,n2,c));
 }
 sort(node.begin(),node.end(),comp);
 int len=node.size();
 int parent[n+1];
 for(int i=1;i<=n;i++)
    parent[i]=i;
 for(int i=0;i<len;i++)
 {
     Union(node[i],parent);
 }
 /*len=mst.size();
 for(int i=0;i<len;i++)
 {
     cnt+=mst[i].c;
 }*/
 printf("%d\n",cnt);
 return 0;
}






