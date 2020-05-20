#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        int a[n+1];
        for(int i=1;i<=n;i++)
            scanf("%d",&a[i]);
        int cnt = 0;
        for(int i=1;i<=n;i++)
        {
            int pos;
            if(a[i] == i)continue;
            for(int j=i+1;j<=n;j++)
            {
                if(a[j] == i)
                {
                    ++cnt;
                    swap(a[i],a[j]);
                    break;
                }
            }
        }
        printf("Case %d: %d\n",i,cnt);
    }
    return 0;
}













