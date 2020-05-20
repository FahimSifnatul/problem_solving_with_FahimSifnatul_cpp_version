//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
bool dp[100005];

int prime()
{
    dp[0]=dp[1]=true;
    for(int i=2;i<=316;)
    {
        if(dp[i]==false)
        {
            for(int j=i*i;j<=100000;)
            {
              dp[j]=true;
              if(i==2)j+=2;
              else j+=2*i;
            }
        }
        if(i==2)++i;
        else i+=2;
    }
}

int main()
{
    string s;
    prime();
    while(cin>>s and s!="0")
    {
        int len=s.size();
        vector<int>v;
        for(int i=len-1;i>=0;i--)
        {
            int pow=1,sze=0,temp=0;
            for(int j=i;j>=0;j--)
            {
              if(sze==5)break;
              temp+=pow*(s[j]-'0');
              pow*=10;
              v.push_back(temp);
              ++sze;
            }
        }
        sort(v.begin(),v.end());
        len=v.size();
        for(int i=len-1;i>=0;i--)
        {
            if(dp[v[i]]==false)
            {
                printf("%d\n",v[i]);
                break;
            }
            //cout<<v[i]<<' ';
        }
    }
    return 0;
}
