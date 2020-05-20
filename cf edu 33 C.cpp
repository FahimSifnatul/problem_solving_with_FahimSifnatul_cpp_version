#include<bits/stdc++.h>
using namespace std;
int c[100002],par[100002],r[100002];

int FIND(int n)
{
    if(par[n]==n)return n;
    else return par[n]=FIND(par[n]);
}

int UNION(int n1,int n2)
{
    int u = FIND(n1);
    int v = FIND(n2);
    if(u != v)
    {
       if(r[u] <= r[v]) ++r[v],r[u] += r[v]+1, par[v] = u,c[u]=min(c[v],c[u]);
       else ++r[u],r[v] += r[u]+1, par[u] = v,c[v]=min(c[v],c[u]);
    }
}

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        par[i]=i;
    for(int i=1;i<=n;i++)
        scanf("%d",&c[i]);
    for(int i=0;i<m;i++)
    {
        int n1,n2;
        scanf("%d%d",&n1,&n2);
        UNION(n1,n2);
    }
    long long int sum = 0;
    for(int i=1;i<=n;i++)
        if(par[i]==i)sum += c[i];
    printf("%lld\n",sum);
    return 0;
}
