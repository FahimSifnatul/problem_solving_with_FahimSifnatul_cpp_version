/*bismillahir rahmanir rahim*/

#include<bits/stdc++.h>
using namespace std;

bool dp[32769];
vector<int>prime;

void sieve()
{
 for(int i=2;i<=181;)
 {
     if(dp[i]==false)
     {
       for(int j=i*i;j<=32768;)
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
 for(int i=2;i<=32768;)
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
 int n;
 sieve();
 while(scanf("%d",&n) and n!=0)
 {
     int cnt=0,i=0,temp;
     while(true)
     {
         temp=n-prime[i];
         if(prime[i]>temp)
            break;
         else if(dp[temp]==false and (temp%2!=0 or temp==2))
                ++cnt;
         ++i;
     }
     printf("%d\n",cnt);
 }
 return 0;
}






