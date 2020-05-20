#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a[150005],b[150005],c[150005];

ll gcd(ll a,ll b)
{
    if(b == 0) return a;
    return gcd(b,a%b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        c[i] = a[i]*b[i];
    }
    ll ans = c[0];
    for(int i=1;i<n;i++)
    {
        ans = gcd(ans,c[i]);
    }
    if(n == 1)cout<<a[0];
    else if(ans == 1)cout<<-1;
    else
    {
        set<int>s;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
           ll x,y;
           x = gcd(ans,a[i]);
           y = gcd(ans,b[i]);
           if(x != 1)s.insert(x),v.push_back(x);
           if(y != 1)s.insert(y),v.push_back(y);
        }
        for(auto &it:s)
        {
            bool check = true;
            for(int i=0;i<n;i++)
            {
                if(a[i]%it != 0 and b[i]%it != 0)
                {
                    check = false;
                    break;
                }
            }
            if(check == true)
            {
                cout<<it<<endl;
                return 0;
            }
        }
        cout<<2;
    }
    return 0;
}










