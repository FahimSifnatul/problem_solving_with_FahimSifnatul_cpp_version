/*bismillahir rahmanir rahim*/
#include<vector>
#include<cstdio>
using namespace std;

bool dp[10000001];
vector<int>prime;

void sieve()
{
    for(int i=2;i<=3162;)
    {
        if(dp[i]==false)
        {
         for(int j=i*i;j<=1e7;)
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
    sieve();
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int temp,i=0,x,y,f,s;
        if(n<8)
        {
            printf("Impossible.\n");
            continue;
        }
        if(n%2==0)
        {
            f=s=2;
            n-=4;
        }

        else
        {
            f=2;
            s=3;
            n-=5;
        }
        while(true)
        {
           temp=n-prime[i];
           if(dp[temp]==false and (temp%2!=0 or temp==2))
           {
               x=prime[i];
               y=temp;
               break;
           }
           ++i;
        }
        printf("%d %d %d %d\n",f,s,x,y);
    }
    return 0;
}









