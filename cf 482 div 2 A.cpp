#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int main()
{
    ll n;
    cin>>n;
    ++n;
    if(n==1)
    {
        cout<<0<<endl;
        return 0;
    }
    n%2 == 0 ? cout<<n/2 : cout<<n;
    cout<<endl;
    return 0;
}
