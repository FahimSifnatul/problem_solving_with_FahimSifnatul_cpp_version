#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,i;
 scanf("%d",&n);
 int a[n],sum=0,pum=0,cnt=0;
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 if(n==1)
 {
     cout<<"1";
     return 0;
 }
sort(a,a+n);
for(i=n-1;i>=0;i--)
 {
   sum+=a[i];
 }
 for(i=n-1;i>=0;i--)
 {
   if(pum>sum)
    break;
   else
   {
     sum-=a[i];
     pum+=a[i];
     ++cnt;
   }
 }
 cout<<cnt;
 return 0;
}













