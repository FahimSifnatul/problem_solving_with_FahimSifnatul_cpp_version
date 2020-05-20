/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;

bool dp[20000001];
vector<int>prime;
vector<int>paire;
int len;

void sieve()
{
    for(int i=2;i<=4472;)
    {
        if(dp[i]==false)
        {
            for(int j=i*i;j<=20000000;)
            {
              dp[j]=true;
              if(i==2)
                j+=2;
              else
                j+=(i<<1);
            }
        }
        if(i==2)
            i++;
        else
            i+=2;
    }
    for(int i=2;i<=20000000;)
    {
        if(dp[i]==false)
            prime.push_back(i);
        if(i==2)
            ++i;
        else
            i+=2;
    }
}

void pai()
{
    len=prime.size();
    for(int i=1;i<len;i++)
    {
      if(prime[i]==prime[i-1]+2)
      {
          paire.push_back(prime[i-1]);
          paire.push_back(prime[i]);
      }
    }
}

int main()
{
  int n;
  sieve();
  pai();
  while(scanf("%d",&n)!=EOF)
  {
   cout<<"("<<paire[(n<<1)-2]<<", "<<paire[(n<<1)-1]<<")"<<'\n';
  }
  return 0;
}










