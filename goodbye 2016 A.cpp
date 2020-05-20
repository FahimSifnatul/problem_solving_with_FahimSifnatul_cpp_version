/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,k,i;
  scanf("%d%d",&n,&k);
  int sum,cnt=0,t=240;
  for(i=1;i<=n;i++)
  {
    sum=i*5;
    t-=sum;
    if (t<k)
    break;
    //cout<<sum<<endl;
  }
  if (i-1<=n)
  printf("%d",i-1);
  else
  printf("%d",k);
  return 0;
}

