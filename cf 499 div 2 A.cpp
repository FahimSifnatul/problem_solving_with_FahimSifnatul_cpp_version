#include<bits/stdc++.h>
using namespace std;
int n,k,dis[27];
vector<int>v[27];

int bfs(int src)
{
    int sum = src,l=1;
    dis[src] = 0;
    queue<int>q;
    q.push(src);
    while(!q.empty())
    {
       if(l==k)return sum;
       int u = q.front();
       q.pop();
       int len = v[u].size();
       for(int i=0;i<len;i++)
       {
          if(dis[v[u][i]] == -1)
          {
              if(v[u][i]-u>1)
              {
                 ++l;
                 sum += v[u][i];
              }
              dis[v[u][i]] = 0;
              q.push(v[u][i]);
          }
       }
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>k;
    char c;
    set<int>st;
    set<int>::iterator it;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        st.insert((c-'a')+1);
    }
    for(it=st.begin();it!=st.end();it++)
       v[it].push_back(it);
    for(int i=0;i<n;i++)
    {
        memset(dis,-1,sizeof dis);
        int ans = bfs(a[i]);
        if(ans>0)
        {
            cout<<ans<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}














