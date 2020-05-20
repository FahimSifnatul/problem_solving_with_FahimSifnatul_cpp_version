//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    vector<int>node[n+1];
    int dis[n+1],s,a,b;
    scanf("%d%d%d",&s,&a,&b);
    int n1,n2;
    while(m--)
    {
      scanf("%d%d",&n1,&n2);
      node[n1].push_back(n2);
      node[n2].push_back(n1);
    }
}









