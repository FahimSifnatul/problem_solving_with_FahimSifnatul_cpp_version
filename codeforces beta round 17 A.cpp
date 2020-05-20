/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;

bool dp[1001];
vector<int>prime,r;

int main()
{
    int n,k,sq=sqrt(1000);
    scanf("%d%d",&n,&k);
    for(int i=2;i<=sq;)
    {
        if(dp[i]==false)
        {
          for(int j=i*i;j<=1000;)
          {
            dp[j]=true;
            if(j==2)
                j+=i;
            else
                j+=(i<<1);
          }
        }
        if(i==2)
            ++i;
        else
            i+=2;
    }
    for(int i=2;i<=1000;)
    {
        if(dp[i]==false)
            prime.push_back(i);
        if(i==2)
            ++i;
        else
            i+=2;
    }

    int len=prime.size(),cnt=0,temp;

    for(int i=1;i<len;i++)
    {
       temp=prime[i]+prime[i-1]+1;
       if(dp[temp]==false and temp%2!=0)
        r.push_back(temp);
    }
    len=r.size();
    for(int i=0;i<len;i++)
    {
       if(r[i]>n)
        break;
       else
        ++cnt;
    }
    //cout<<len<<'\n';
    if(cnt>=k)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
