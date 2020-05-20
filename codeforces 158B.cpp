#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
  long long int n;
  scanf("%I64d",&n);
  long long int a[n],cnt=0,one=0,two=0,three=0,four=0,rem;
  for(int i=0;i<n;i++)
  {
     scanf("%I64d",&a[i]);
     if(a[i]==1)
     {
         ++one;
     }
     else if(a[i]==2)
     {
         two+=2;
     }
     else if(a[i]==3)
     {
         ++three;
     }
     else
     {
         ++four;
     }
  }
  n=one;
  cnt+=four;
  if(three>=one)
  {
      cnt+=three;
      one=0;
  }
  else
  {
      cnt+=three;
      one-=three;
  }
  two+=one;
  cnt+=two/4;
  two%=4;
  if(two>0)
    ++cnt;
  printf("%I64d\n",cnt);
  return 0;
}
