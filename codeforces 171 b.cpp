//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,t;
 scanf("%d %d",&n,&t);
 int a[n];
 for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
 int sum=0,cnt=0,ma=0;
 for(int j=0;j<n;j++)
 {
     sum+=a[j];
     if(sum<=t)++cnt;
     else
        sum-=a[j];
 }
 printf("%d\n",cnt);
 return 0;
}
