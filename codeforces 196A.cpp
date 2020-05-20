#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,m,mi=0,flg=0;
 scanf("%d %d",&n,&m);
 int a[m];
 for(int i=0;i<m;i++)
 {
  scanf("%d",&a[i]);
 }
 sort(a,a+m);
 for(int i=0;i<m;i++)
 {
  if(i+n-1<m and flg==0)
  {
      mi=a[i+n-1]-a[i];
      ++flg;
  }
  else if(i+n-1<m)
    mi=min(mi,a[i+n-1]-a[i]);
  else
    break;
 }
 printf("%d",mi);
 return 0;
}
