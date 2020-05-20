#include<bits/stdc++.h>
using namespace std;
int n,m;
long long int sum[200005],a[200005],let[200005];
struct val
{
    long long int dor,room;
};
map<long long int,val>mp;

int b(int l,int r,long long int let)
{
 int m = (l+r)/2;
 if(l==r and l==1)
 {
   mp[let].dor = 1;
   mp[let].room = let;
 }
 else if(l==r)
 {
   mp[let].dor = l;
   mp[let].room = let-sum[l-1];
 }
 else
 {
     if(let<=sum[m] and let>sum[m-1])
     {
        mp[let].dor = m;
        mp[let].room = let-sum[m-1];
     }
     else if(let>sum[m] and let<=sum[m+1])
     {
        mp[let].dor = m+1;
        mp[let].room = let-sum[m];
     }
     else if(let<sum[m])
     {
        b(l,m,let);
     }
     else if(let>sum[m])
     {
        b(m,r,let);
     }
 }
}

int main()
{
 scanf("%d%d",&n,&m);
 for(int i=1;i<=n;i++)
    scanf("%lld",&a[i]),sum[i]=a[i],sum[i] += sum[i-1];
 for(int i=1;i<=m;i++)
 {
   scanf("%lld",&let[i]);
   b(1,n,let[i]);
 }
 for(int i=1;i<=m;i++)
 {
   cout<<mp[let[i]].dor<<' '<<mp[let[i]].room<<endl;
 }
 return 0;
}









