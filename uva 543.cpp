/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;

bool dp[1000001];
vector<int>prime;

void sieve()
{
    for(int i=2;i<=1e3;)
    {
        if(dp[i]==false)
        {
         for(int j=i*i;j<=1e6;)
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
    for(int i=2;i<=1e6;)
    {
        if(dp[i]==false)
            prime.push_back(i);
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
 int x,y,len=prime.size();
 while(scanf("%d",&n) and n!=0)
 {
  for(int i=0;;i++)
  {
    x=prime[i];
    y=n-x;
    if(dp[y]==false and (y%2!=0 or y==2))
        break;
  }
  printf("%d = %d + %d\n",n,x,y);
 }
 return 0;
}
