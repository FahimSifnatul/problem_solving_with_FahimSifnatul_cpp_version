/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,cs=1;
    while(scanf("%d",&n)!=EOF)
    {
        string s[n+1],t1,t2;
        map<string,int>index;
        map<int,string>print;
        vector<int>outdegree[n+1];
        int indegree[n+1];
        memset(indegree,0,sizeof indegree);
        for(int i=1;i<=n;i++)
        {
           cin>>s[i];
           index[s[i]]=i;
           print[i]=s[i];
        }
        scanf("%d",&m);
        for(int i=0;i<m;i++)
        {
           cin>>t1>>t2;
           outdegree[index[t1]].push_back(index[t2]);
           ++indegree[index[t2]];
        }
        queue<int>q,topsort;
        vector<int>temp;
        for(int i=1;i<=n;i++)
        {
           if(indegree[index[s[i]]]==0)
            q.push(index[s[i]]);
        }
        int len,u;
        while(!q.empty())
        {
         u=q.front();
         q.pop();
         len=outdegree[u].size();
         topsort.push(u);
         for(int j=0;j<len;j++)
         {
             --indegree[outdegree[u][j]];
             if(indegree[outdegree[u][j]]==0)
                q.push(outdegree[u][j]);
         }
         //sort(temp.begin(),temp.end());
         len=q.size();
         for(int i=0;i<len;i++)
         {
           temp.push_back(q.front());
           q.pop();
         }
         sort(temp.begin(),temp.end());
         len=temp.size();
         for(int i=0;i<len;i++)
         {
           q.push(temp[i]);
         }
         temp.clear();
        }
        printf("Case #%d: Dilbert should drink beverages in this order:",cs);
        len=topsort.size();
        for(int i=0;i<len;i++)
        {
            cout<<' '<<print[topsort.front()];
            topsort.pop();
        }
        cout<<'.'<<endl<<endl;
        ++cs;
        index.clear();
        print.clear();
        for(int i=1;i<=n;i++)
            outdegree[i].clear();
    }
    return 0;
}
