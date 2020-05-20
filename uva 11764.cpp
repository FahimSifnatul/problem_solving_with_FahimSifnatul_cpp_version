#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cs=1,n;
    scanf("%d",&t);
    while(t--)
    {
      scanf("%d",&n);
      int a[n],up=0,low=0;
      for(int i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
          if(i>0)
          {
              if(a[i]>a[i-1])
                ++up;
              else if(a[i]<a[i-1])
                ++low;
          }
      }
      printf("Case %d: %d %d\n",cs,up,low);
      ++cs;
    }
    return 0;
}
