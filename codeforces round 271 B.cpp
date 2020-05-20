/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  n,t;
    scanf("%d%d",&n,&t);
    int a[n],sum=0,ans=0,flg=0,cnt=0;
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum<=t)
            ++cnt;
        else if(sum>t and flg==0)
        {
            flg=1;
            sum=0;
            ans=cnt;
            cnt=0;
            i-=1;
        }
        else
        {
            sum=0;
            ans=max(cnt,ans);
            cnt=0;
            i-=1;
        }
    }
    printf("%d\n",ans);
    return 0;
}
