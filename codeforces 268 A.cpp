#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n;
 scanf("%d",&n);
 int p,q,a[n],temp;
 memset(a,0,sizeof a);
 scanf("%d",&p);
 for(int i=0;i<p;i++)
 {
  cin>>temp;
  ++a[temp-1];
 }
 scanf("%d",&q);
 for(int i=0;i<q;i++)
 {
  cin>>temp;
  ++a[temp-1];
 }
 for(int i=0;i<n;i++)
 {
  if(a[i]==0)
  {
   cout<<"Oh, my keyboard!";
   return 0;
  }
 }
 cout<<"I become the guy.";
 return 0;
}
