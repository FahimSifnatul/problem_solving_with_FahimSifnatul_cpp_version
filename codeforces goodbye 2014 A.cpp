/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;

bool result;

bool dfs(vector<int>v[],int n,int level[],int des)
{
 int len=v[n].size();
 level[n]=1;
 for(int i=0;i<len;i++)
 {
  if(level[v[n][i]]==0)
  {
   level[v[n][i]]=1;
   if(v[n][i]==des)
     return result=true;
   else
    dfs(v,v[n][i],level,des);
  }
 }
}

int main()
{
    int n,des,m;
    scanf("%d%d",&n,&des);
    int level[n+1],a[n+1];
    memset(level,0,sizeof level);
    vector<int>v[n+1];
    for(int i=1;i<n;i++)
    {
      scanf("%d",&a[i]);
      v[i].push_back(i+a[i]);
    }
    dfs(v,1,level,des);
    if(result==true)
        printf("YES");
    else
        printf("NO");
    return 0;
}
