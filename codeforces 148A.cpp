#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a[4],d,i,j,k,n,cnt=0;
 scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&d);
 int s[d+1];
 memset(s,-1,sizeof s);
 for(j=0;j<4;j++)
 {
     for(k=a[j];k<=d;k+=a[j])
     {
         s[k]=0;
     }
 }
 for(i=0;i<=d;i++)
 {
   if(s[i]==0)
    ++cnt;
    //cout<<s[i]<<endl;
 }
 cout<<cnt;
 return 0;
}
