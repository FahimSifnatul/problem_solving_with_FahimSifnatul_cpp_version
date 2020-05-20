#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,k,pos=0;
    cin>>n>>k;
    ll a[n],mi=1000000001,ma=-1000000001;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mi = min(mi,a[i]);
        ma = max(ma,a[i]);
        if(a[i] == ma)
            pos = i;
    }
    if(k == 1)
        cout<<mi;
    else if(k >= 3 or a[0] == ma or a[n-1] == ma)
        cout<<ma;
    else
        cout<<max(a[0],a[n-1]);
    cout<<endl;
    return 0;
}




















