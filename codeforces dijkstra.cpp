//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;

struct val
{
    int node,cost;
 val(int a,int b)
 {
     node=a;
     cost=b;
 }
};

struct comp
{
    bool operator()(const val& a,const val& b)
    {
      return a.cost>b.cost;
    }
};

int dijkstra(long long int dis[],int parent[],vector<val> data[])
{
 int u,len;
 dis[1]=0;
 parent[1]=1;
 priority_queue<val,vector<val>,comp>q;
 q.push(val(1,0));
 while(!q.empty())
 {
     u=q.top().node;
    q.pop();
     len=data[u].size();
     for(int i=0;i<len;i++)
     {
         if(dis[u]+data[u][i].cost<dis[data[u][i].node])
         {
          dis[data[u][i].node]=dis[u]+data[u][i].cost;
          parent[data[u][i].node]=u;
          q.push(val(data[u][i].node,dis[data[u][i].node]));
         }
     }
 }
 return 0;
}

int main()
{
    int n,m,c,n1,n2,src,des;
    cin>>n>>m;
    vector<val>data[n+1];
    int parent[n+1];
    long long int dis[n+1];

    for(int i=0;i<m;i++)
    {
        cin>>n1>>n2>>c;
        data[n1].push_back(val(n2,c));
        data[n2].push_back(val(n1,c));
        //cout<<data[n1][0].cost<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        dis[i]=10e18;
        parent[i]=-1;
    }
    dijkstra(dis,parent,data);
    stack<int>st;
    int temp=n;
    st.push(temp);
    //cout<<1<<' ';
    while(parent[temp]!=1)
    {
       //cout<<parent[temp]<<' ';
       st.push(parent[temp]);
       temp=parent[temp];
       if(temp==-1)
       {
           cout<<-1;
           return 0;
       }
    }
    cout<<1<<' ';
    while(!st.empty())
    {
        cout<<st.top()<<' ';
        st.pop();
    }
    return 0;
}


/*
6 8
0 1 1
0 3 4
0 5 3
1 2 2
2 3 6
2 4 7
3 4 7
4 5 5
*/
