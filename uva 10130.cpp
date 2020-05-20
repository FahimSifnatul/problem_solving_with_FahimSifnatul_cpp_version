#include<stdio.h>
#include<algorithm>
using namespace std;

#define sf(a)      scanf("%d",&a)
#define pf(a)      printf("%d",a)
#define newline    printf("\n")
#define ret        return 0

int dp[1001][31], p[1001], w[1001], fam, ans, t, n, g;

int main()
{
    sf(t);
    while(t--)
    {
        sf(n);
        ans = 0;
        for(int i=1;i<=n;i++)
            sf(p[i]),sf(w[i]);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=30;j++)
            {
                if(j-w[i]<0)
                    dp[i][j] = dp[i-1][j];
                else
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + p[i]);
            }
        }
        sf(g);
        while(g--)
        {
            sf(fam);
            ans += dp[n][fam];
        }
        pf(ans);
        newline;
    }
    //newline;
    ret;
}
















