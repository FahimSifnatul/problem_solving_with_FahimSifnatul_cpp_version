#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,cnt=1;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
      if(i>0 and a[i]!=a[i-1])
      ++cnt;
   }

   printf("%d",cnt);
   return 0;
}
