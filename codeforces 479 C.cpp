#include<bits/stdc++.h>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   int len,n,k;
   cin>>len>>k;
   int a[len];
   for(int i=0;i<len;i++)
   {
       cin>>n;
       a[i] = n;
   }
   sort(a,a+len);
   if(k == 0)
   {
       a[0] == 1 ? printf("-1") : printf("1");
   }
   else if(k == len)
   {
       printf("%d",a[len-1]);
   }
   else if(a[k-1] != a[k])
   {
       printf("%d",a[k-1]);
   }
   else printf("-1");
   cout<<endl;
   return 0;
}















