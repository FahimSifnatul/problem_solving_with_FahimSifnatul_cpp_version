//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
int a[100005],cnt=0,check[100005],n;

int main()
{
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
     if(check[a[i]]==0)
     {
         check[a[i]]=1;
         ++cnt;
     }
     else if(check[a[i]]==1)
     {
         if(a[i-1]!=a[i])
         {
             check[a[i]]=2;
             --cnt;
         }
     }
 }
 cout<<cnt<<endl;
 return 0;
}
