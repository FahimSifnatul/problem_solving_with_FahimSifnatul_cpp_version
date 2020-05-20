#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
vector<int>v[100005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       int u,w;
       cin>>u>>w;
       v[u].push_back(w);
       v[w].push_back(u);
    }
    if(n%2)
    {
        cout<<-1;
        return 0;
    }

    return 0;
}













