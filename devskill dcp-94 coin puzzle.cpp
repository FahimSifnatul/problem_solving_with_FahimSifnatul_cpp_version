/*bismillahir rahmanir rahim*/
#include<iostream>
#include<queue>
#include<vector>
#include<string>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int t,n,q;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&q);
        int indegree[26];
        memset(indegree,-1,sizeof indegree);
        vector<int>outdegree[26];
        string temp;
        for(int i=0;i<q;i++)
        {
           cin>>temp;
           if(temp[1]=='>')
           {
               outdegree[temp[2]-'A'].push_back(temp[0]-'A');
               if(indegree[temp[0]-'A']==-1)
                 indegree[temp[0]-'A']=1;
               else
                 ++indegree[temp[0]-'A'];

               if(indegree[temp[2]-'A']==-1)
                 indegree[temp[2]-'A']=0;
           }
           else
           {
               outdegree[temp[0]-'A'].push_back(temp[2]-'A');
               if(indegree[temp[2]-'A']==-1)
                 indegree[temp[2]-'A']=1;
               else
                 ++indegree[temp[2]-'A'];

               if(indegree[temp[0]-'A']==-1)
                 indegree[temp[0]-'A']=0;
           }
        }
        int len,u;
        queue<int>q;
        queue<char>topsort;
        for(int i=0;i<26;i++)
        {
            if(indegree[i]==0)
              q.push(i);
        }
        int cnt=0;
        while(!q.empty())
        {
          u=q.front();
          q.pop();
          len=outdegree[u].size();
          topsort.push(u+'A');
          for(int i=0;i<len;i++)
          {
              --indegree[outdegree[u][i]];
              if(indegree[outdegree[u][i]]==0)
                  q.push(outdegree[u][i]);

          }
          ++cnt;
        }
        if(cnt!=n)
        {
          cout<<"Impossible\n";
          continue;
        }
        while(!topsort.empty())
        {
           cout<<topsort.front();
           topsort.pop();
        }
        for(int i=0;i<26;i++)
            outdegree[i].clear();
        cout<<'\n';
    }
}
