#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[4];
    for(int i=0;i<4;i++)
        scanf("%d",&a[i]);
    int i,j,k,flg=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(j!=i)
            {
              for(k=0;k<4;k++)
              {
                if(k!=i and k!=j)
                {
                    if(a[i]+a[j]>a[k] and a[k]+a[i]>a[j] and a[j]+a[k]>a[i])
                    {
                        printf("TRIANGLE\n");
                        return 0;
                    }
                    else if(a[i]+a[j]==a[k] or a[k]+a[i]==a[j] or a[j]+a[k]==a[i])
                        flg=1;
                }
              }
            }
        }
    }
    if(flg==1)
        printf("SEGMENT\n");
    else
        printf("IMPOSSIBLE\n");
    return 0;
}
