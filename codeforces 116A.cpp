#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
  int n,i;
  scanf("%d",&n);
  int a[n],b[n],sum[n];
  for(i=0;i<n;i++)
  {
      scanf("%d %d",&a[i],&b[i]);
      if(i==0)
        sum[i]=a[i]+b[i];
      else if(i>0)
      {
          sum[i]=b[i]+sum[i-1]-a[i];
      }
  }
  sort(sum,sum+n);
  printf("%d\n",sum[n-1]);
  return 0;
}
