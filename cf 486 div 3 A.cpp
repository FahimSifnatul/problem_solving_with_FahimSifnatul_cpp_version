#include<bits/stdc++.h>
using namespace std;
map<int,bool>mp;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    int a[n];
    set<int>st;
    for(int i=0;i<n;i++)
        cin>>a[i],st.insert(a[i]);
    if(st.size() < k)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    for(int i=0,cnt=0;i<n;i++)
    {
       if(cnt == k) return 0;
       if(mp[a[i]] == false)
       {
          mp[a[i]] = true;
          cout<<i+1<<' ';
          ++cnt;
       }
    }
}
