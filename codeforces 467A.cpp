#include<bits/stdc++.h>
using namespace std;
int main()
{
 int i,n,cnt=0,p,q;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d %d",&p,&q);
   if(q-p>=2)
    ++cnt;
 }
 printf("%d",cnt);
 return 0;
}
