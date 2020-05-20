#include<bits/stdc++.h>
using namespace std;

int main()
{
 long long int n,j=0,flg=0;
 scanf("%I64d",&n);
 long long int a[n],s[n];
 memset(s,0,sizeof s);
 for(int i=0;i<n;i++)
 {
     scanf("%I64d",&a[i]);
  if(flg==0)
  {
      ++s[j];
      ++flg;
  }
  else if(a[i]>=a[i-1])
  {
      ++s[j];
  }
  else
  {
      ++j;
      ++s[j];
  }
 }
 ++j;
 sort(s,s+j);
 cout<<s[j-1];
 return 0;
}
