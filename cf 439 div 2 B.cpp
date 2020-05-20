#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll a,b;
    cin>>a>>b;
    if(b-a >= 5)
    {
        cout<<0;
    }
    else
    {
        ll ans = 1;
        for(ll i=a+1;i<=b;i++)
        {
            a = i%10;
            ans *= a;
        }
        cout<<ans%10;
    }
    cout<<endl;
    return 0;
}
