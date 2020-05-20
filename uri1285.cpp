#include<bits/stdc++.h>
using namespace std;

int main()
{
 int rem,n,m,cnt,a[5000],i,temp;
 while(scanf("%d%d",&n,&m)==2)
 {
  cnt=0;
  while(n<=m)
  {
   memset(a,0,sizeof a);
   i=0;
   temp=n;
   while(temp>0)
   {
       rem=temp%10;
       a[i]=rem;
       ++i;
       temp/=10;
   }
   if(i==1)
    ++cnt;
   sort(a,a+i);
   for(int j=0;j<i;j++)
   {
    if(j>0)
    {
        if(a[j]==a[j-1] and j<i-1)
            break;
        else if(a[j]==a[j-1] and j==i-1)
            break;
        else if(a[j]!=a[j-1] and j==i-1)
            ++cnt;
    }
   }
   n+=1;
  }
  printf("%d\n",cnt);
 }
}
