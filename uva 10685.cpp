//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;

int bfs(int src,vector<int>v[],int dis[])
{
 dis[src] = 0;
 queue<int>q;
 q.push(src);
 int cnt = 1;
 while(!q.empty())
 {
   int u = q.front();
   q.pop();
   int len = v[u].size();
   for(int i=0;i<len;i++)
   {
       int node = v[u][i];
       if(dis[node] == -1)
       {
           ++cnt;
           dis[node] = 0;
           q.push(node);
       }
   }
 }
 return cnt;
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 int n,m;
 while(cin>>n>>m)
 {
     if(n==0 and m==0)
        break;
     string s1,s2;
     map<string,int>mp;
     int dis[n];
     memset(dis,-1,sizeof dis);
     vector<int>v[n];
     int cnt = 1;
     for(int i=0;i<n;i++)cin>>s1,mp[s1] = i;
     for(int i=0;i<m;i++)
     {
        cin>>s1>>s2;
        int x = mp[s1],y = mp[s2];
        v[x].push_back(y);
        v[y].push_back(x);
     }
     for(int i=0;i<n;i++)
     {
        if(dis[i] == -1)
        {
            cnt = max(cnt,bfs(i,v,dis));
        }
     }
     printf("%d\n",cnt);
 }
 return 0;
}


/*
4 4
a
b
c
d
a b
b c
c a
d b
*/




