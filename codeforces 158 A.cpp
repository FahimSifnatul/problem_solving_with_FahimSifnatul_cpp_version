#include<bits/stdc++.h>

int main()
{
 int cnt=0,i,j,n,k;
 scanf("%d %d",&n,&k);
 int a[n];
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
     if(a[i]>0 and i<k)
        ++cnt;
     else if(i>=k and a[i]==a[k-1] and a[i]>0)
        ++cnt;
 }
 printf("%d",cnt);
 return 0;
}
