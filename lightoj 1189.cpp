//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll f[20],sum[20],temp,cs=1;

int calculate(ll n,ll i)
{
 vector<int>v;
 v.push_back(i);
 temp=f[i];
 for(int j=i-1;j>=0;j--)
 {
   if(temp+f[j]<n)
   {
       v.push_back(j);
       temp+=f[j];
   }
   else if(temp+f[j]==n)
   {
       v.push_back(j);
       temp+=f[j];
       break;
   }
 }
   if(temp!=n)
   {
      printf("Case %d: impossible",cs);
      return 0;
   }
   int len=v.size();
    //cout<<v[len-1]<<endl;
   for(int j=len-1;j>=0;j--)
   {
       if(j==len-1)
           printf("Case %d: %d!",cs,v[j]);
       else
           printf("+%d!",v[j]);
   }
   return 0;
 }

int main()
{
 ll t;
 scanf("%lld",&t);
        f[0]=1;
        f[1]=1;
        f[2]=2;
        f[3]=6;
        f[4]=24;
        f[5]=120;
        f[6]=720;
        f[7]=5040;
        f[8]=40320;
        f[9]=362880;
        f[10]=3628800;
        f[11]=39916800;
        f[12]=479001600;
        f[13]=6227020800;
        f[14]=87178291200;
        f[15]=1307674368000;
        f[16]=20922789888000;
        f[17]=355687428096000;
        f[18]=6402373705728000;
        f[19]=121645100408832000;
 sum[0]=f[0];
 for(int i=1;i<20;i++)
 {
    sum[i]=f[i]+sum[i-1];
    //cout<<sum[i]<<endl;
 }
 ll n;
 while(t--)
 {
   scanf("%lld",&n);
   for(int i=19;i>=0;i--)
   {
       if(n>=f[i] and n<=sum[i])
       {
           calculate(n,i);
           goto xx;
       }
   }
   printf("Case %d: impossible",cs);
   xx:
      printf("\n");
      ++cs;
 }
 return 0;
}










