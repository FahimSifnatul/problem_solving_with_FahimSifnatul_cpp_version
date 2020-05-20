#include<bits/stdc++.h>
using namespace std;
vector<int>node[200];
deque<int>q;
int level[200];

/*int bfs(int n)
{
    int u,v,flg=0;

    memset(level,-1,sizeof level);
    q.push_back(0);
    level[0]=0;
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
    return 0;
}*/

int main()
{
    int n,l;
   while(scanf("%d",&n)==1 and n!=0)
   {
       scanf("%d",&l);
       int x,y,flg=0,len[n];
       for(int i=0;i<l;i++)
       {
        scanf("%d%d",&x,&y);
        node[x].push_back(y);
        node[y].push_back(x);
       }
       //bfs(n);

       for(int i=0;i<n;i++)
        {
          int le=node[i].size();
          len[i]=le;
          //cout<<len<<endl;
        }
       //sort(len,len+n);
       int one=0,two=0,three=0,dif1,dif2;
       for(int i=0;i<n;i++)
        {
         if(len[i]>2)
            ++three;
         else if(len[i]==2)
            ++two;
         else
            ++one;
        }

       if((three==1 and one==n-1) or (n%2==0 and two==n) or (n-two==2 and three==0) or n==1)
        printf("BICOLORABLE.\n");
       else
        printf("NOT BICOLORABLE.\n");
       for(int i=0;i<n;i++)
          node[i].clear();
   }
   return 0;
}
