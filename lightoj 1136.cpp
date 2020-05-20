#include<bits/stdc++.h>
using namespace std;

int main()
{
 long long int t,a,b,cs=1;
 scanf("%lld",&t);
 while(t--)
 {
  scanf("%lld %lld",&a,&b);
  printf("Case %lld: %lld\n",cs,b*2/3-(a-1)*2/3);
  ++cs;
 }
 return 0;
}
