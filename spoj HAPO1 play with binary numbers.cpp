#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

int odd(ll n)
{
 bitset<70>bit(n);
 int one=0;
   for(int i=68;i>=0;i-=2)
   {
       if(bit.test(i) == 1)++one;
   }
   return one;
}

int even(ll n)
{
 bitset<70>bit(n);
 int one=0;
   for(int i=69;i>=0;i-=2)
   {
       if(bit.test(i) == 1)++one;
   }
   return one;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    ll n,m,k;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>m>>k;
        int cnt = 0;
        for(ll i=n;i<=m;i++)
        {
            if(abs(odd(i) - even(i)) == k)++cnt;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
