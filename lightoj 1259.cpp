/*bismillahir rahmanir rahim*/
#include<cstdio>
#include<cmath>
#include<vector>
#include<iostream>
using namespace std;
bool dp[10000001];
vector<int>prime;
/*generating primes upto 10000000*/
int sieve()
{
    int sq=sqrt(10000000);
        for(int i=2;i<=sq;)
        {
            if(dp[i]==false)
            {
             //prime.push_back(i);
             for(int j=i*i;j<=10000000;)
             {
              dp[j]=true;
              if(i==2)
                j+=i;
              else
                j+=i+i;
             }
            }
            if(i==2)
                ++i;
            else
                i+=2;
        }
        for(int i=2;i<=10000000;)
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
    //int t,cs=1,n;
    //scanf("%d",&t);
      sieve();
    /*while(t--)
    {
        scanf("%d",&n);
        int cnt=0;

        int temp;
        for(int i=0;;i++)
        {
            temp=n-prime[i];
            if(temp<prime[i])
                break;
            if(temp%2==0 and temp!=2)
                continue;
            if(dp[temp]==false)
               ++cnt;
        }
        //cout<<prime.size()<<'\n';
        printf("Case %d: %d\n",cs,cnt);
        ++cs;
    }*/
    return 0;

}
