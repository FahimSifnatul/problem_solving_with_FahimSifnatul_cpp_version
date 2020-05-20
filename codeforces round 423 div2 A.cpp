//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
int n,i=1;

int decreasing(int a[])
{
    while(i<n)
    {
     if(a[i]>=a[i-1])
     {
         cout<<"NO\n";
         exit(0);
     }
     ++i;
    }
    cout<<"YES\n";
    exit(0);
}

int constant(int a[])
{
 while(i<n)
 {
  if(a[i]<a[i-1]) decreasing(a);
  else if(a[i]>a[i-1])
  {
      cout<<"NO\n";
      exit(0);
  }
  ++i;
 }
 cout<<"YES\n";
 exit(0);
}

int increasing(int a[])
{
 while(i<n)
 {
  if(a[i]<a[i-1]) decreasing(a);
  else if(a[i]==a[i-1]) constant(a);
  ++i;
 }
 cout<<"YES\n";
 exit(0);
}

int main()
{
  cin>>n;
 int a[n];
 for(int j=0;j<n;j++)cin>>a[j];
 if(n==1)
 {
     cout<<"YES\n";
     return 0;
 }
 increasing(a);

 return 0;
}




















