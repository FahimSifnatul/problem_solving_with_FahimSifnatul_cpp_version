#include<bits/stdc++.h>
using namespace std;
map<int,bool>mp;

int main()
{
    ios_base::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    if(n/2 > k or (n == 1 and k != 0))
        cout<<-1;
    else if(n == 1 and k == 0)cout<<1;
    else
    {
        int t = k - n/2 + 1;
        cout<<t<<' '<<2*t<<' ';
        mp[t] = mp[2*t] = true;
        t = 2;
        for(int i=1;;)
        {
           if(t == n)break;
           if(mp[i] != true and mp[i+1] != true)
           {
               cout<<i<<' ';
               ++t;
               if(t == n)break;
               cout<<i+1<<' ';
               ++t;
               if(t == n)break;
           }
           i += 2;
        }
    }
}
