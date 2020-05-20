#include<bits/stdc++.h>
using namespace std;

int main()
{
 int a[2001],n,x;
 scanf("%d",&n);
 memset(a,0,sizeof a);
 for(int i=0;i<n;i++)
 {
   scanf("%d",&x);
   ++a[x];
 }
 for(int i=0;i<2001;i++)
 {
   if(a[i]>0)
    printf("%d aparece %d vez(es)\n",i,a[i]);
 }
 return 0;
}
