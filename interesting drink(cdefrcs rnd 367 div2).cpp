#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
  long long int n;
  scanf("%I64d",&n);
  long long int x[n],q;
  for(int i=0;i<n;i++)
  {
      scanf("%I64d",&x[i]);
  }
  scanf("%I64d",&q);
  long long int m[q],cnt[q];
  for(int i=0;i<q;i++)
  {
      cnt[i]=0;
      scanf("%I64d",&m[i]);
      for(int j=0;j<n;j++)
      {
        if(m[i]>=x[j])
        {
            ++cnt[i];
        }
      }
  }
  for(int i=0;i<q;i++)
  {

   printf("%I64d\n",cnt[i]);

  }
  return 0;
}
