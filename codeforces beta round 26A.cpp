/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;
bool dp[3001];
vector<int>prime;
set<int>distinct;

bool sieve()
{
    for(int i=2;i<=3001;)
    {
        if(dp[i]==false)
        {
        prime.push_back(i);
         for(int j=i*i;j<=3001;)
         {
          dp[j]=true;
          if(i==2)
            j+=2;
          else
            j+=(i<<1);
         }
        }
        if(i==2)
            ++i;
        else
            i+=2;
    }
}

int main()
{
 sieve();
 int n;
 scanf("%d",&n);
 int len=prime.size(),x=2,cnt=0,temp;
 while(x<=n)
 {
   int cs=0;
   temp=x;
   while(cs<len)
   {
     if(prime[cs]>temp)
        break;
     if(temp%prime[cs]==0)
     {
         temp/=prime[cs];
         distinct.insert(prime[cs]);
     }
     else
        ++cs;
   }
   //cout<<distinct.size()<<' ';
   if(distinct.size()==2)
    ++cnt;
   distinct.clear();
   ++x;
 }
 printf("%d\n",cnt);
 return 0;
}
