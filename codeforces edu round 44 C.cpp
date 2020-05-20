//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
vector<int>v;
map<long,long>mp2;
map<long,bool>mp1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n;
    int a,x;
    for(int i=0;i<n;i++)
    {
        cin>>a>>x;
        mp[a]=true;
        v.push_back(x);
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a>>x;
        v[a].push_back(x);
    }
    long long int sum = 0;
    for(int i=1;i<=100000;i++)
    {
        int len = v[i].size();
        if(len == 1) sum += v[i][0];
        else if(len == 2)sum += max(v[i][0],v[i][1]);
    }
    cout<<sum<<endl;
    return 0;
}









