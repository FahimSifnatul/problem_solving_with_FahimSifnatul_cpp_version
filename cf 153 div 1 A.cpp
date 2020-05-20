#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll NCR[33335];

ll ncr(ll n,ll r)
{
    if(n == r)return 1;
    else if(r == 1)return n;
    if(NCR[n] != 0)return NCR[n];
    return NCR[n] = ncr(n-1,r) + ncr(n-1,r-1);
}

int binary(int left,int right,int a[],int d)
{

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,d,temp;
    cin>>n>>d;
    vector<ll>v;
    for(int i=0;i<n;i++)
        cin>>temp,v.push_back(temp);
    if(n == 1 or n == 2)
    {
        cout<<0;
        return 0;
    }
    for(ll i = 3;i<33334;i++)
        ncr(i,3);
    ll ans = 0;
    for(int i=0;i<n-2;i++)
    {
        ll index = upper_bound(v.begin()+i,v.end(),v[i]+d-1)-v.begin();
        if(index - i >= 3)ans += NCR[index-i];
    }
    cout<<ans;
    return 0;
}










