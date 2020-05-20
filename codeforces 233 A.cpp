#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    if(n%2!=0)
        printf("-1\n");
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(i%2!=0)
                printf("%d ",i+1);
            else
                printf("%d ",i-1);
        }
    }
    return 0;
}
