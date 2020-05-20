#include<bits/stdc++.h>
using namespace std;

int main()
{
 int t,cs=1;
 scanf("%d",&t);
 while(t--)
 {
  long long int rem,n,pal=0,num;
  scanf("%lld",&n);
  num=n;
  while(n>0)
  {
      rem=n%10;
      pal=pal*10+rem;
      n/=10;
  }
  //cout<<pal<<" "<<num;
  if(pal==num)
    printf("Case %d: Yes\n",cs);
  else
    printf("Case %d: No\n",cs);
  ++cs;
 }
 return 0;
}
