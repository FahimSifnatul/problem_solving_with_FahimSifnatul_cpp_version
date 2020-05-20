//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int itob(ll n)
{
  int mask;
  ll cnt=0;
  while(n!=0)
  {
    mask=n;
    n>>=1;
    n<<=1;
    mask=n^mask;
    n>>=1;
    if(mask==1)
        ++cnt;
    //cout<<mask<<endl;
  }
  return cnt;
}

int main()
{
    int t,cs=0;
    ll n;
    scanf("%d",&t);
    while(t--)
    {
       scanf("%lld",&n);
       ll r=itob(n),temp;
       //cout<<r;
       for(ll i=n+1;;i++)
       {
          temp=itob(i);
          if(temp==r)
          {
              printf("Case %d: %lld\n",++cs,i);
              break;
          }
       }
    }
    return 0;
}
