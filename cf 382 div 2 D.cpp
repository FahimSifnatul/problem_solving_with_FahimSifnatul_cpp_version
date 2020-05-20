#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  ll n;
  cin>>n;
  if(n<=3)
  {
      cout<<1;
      return 0;
  }
  ll len = sqrt(n);
  bool c1 = true,c2 = true;
  for(ll i=2;i<=len;i++)
  {
      if((n-2)%i == 0)
      {
         c1 = false;
      }
      if(n%i == 0)
      {
         c2 = false;
      }
  }
  if(c2 == true)cout<<1;
  else if(c1 == true)cout<<2;
  else
  {
      n%2 == 0 ? cout<<2:cout<<3;
  }
  cout<<endl;
  return 0;
}
