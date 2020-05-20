#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    ll k,x,i;
    cin>>n>>k;
    x = 0;
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
    }
    ll j,temp;
        temp = (x^0);
        if(temp == k)
        {
            cout<<0<<' '<<temp;
            cout<<endl;
            return 0;
        }
    for(j = i;;j++)
    {
        temp = (x^j);
        //cout<<temp<<' '<<x<<endl;
        if(temp == k and temp != j)
        {
            temp<j ? cout<<temp<<' '<<j :cout<<j<<' '<<temp;
            cout<<endl;
            return 0;
        }
        /*else if(temp == 0 or x == 0)
        {
            cout<<0<<' '<<j<<endl;
            return 0;
        }*/
    }
    return 0;
}
