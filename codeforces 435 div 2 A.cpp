#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,cnt = 0;
    ll k,x,i=1;
    cin>>n>>k;
    x = k;
    cout<<"YES"<<endl;
    if(n == 1)
    {
        cout<<k<<endl;
        return 0;
    }
    for(i=1;i<n-1;i++)
    {
        cout<<i<<' ';
        x ^= i;
        ++cnt;
    }
    ll j;
    for(j = i;;j++)
    {
        if((x ^ j) > i)
        {
            (x^j)<j ? cout<<(x^j)<<' '<<j :cout<<j<<' '<<(x^j);
            cout<<endl;
            return 0;
        }
    }
    return 0;
}
