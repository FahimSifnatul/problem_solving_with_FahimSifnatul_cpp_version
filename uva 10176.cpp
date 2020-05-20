#include<cstdio>
#include<cstring>
using namespace std;

#define ll         long long int
#define ull        unsigned long long int
#define fastio     ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define sf(a)      scanf("%d",&a)
#define sfl(a)     scanf("%lld",&a)
#define sfd(a)     scanf("%lf",&a)
#define sfs(a)     scanf("%s",a)
#define sfc(a)     scanf("%c",&a)
#define p(a)       printf(a)
#define pf(a)      printf("%d",a)
#define pfl(a)     printf("%lld",a)
#define pfd(a)     printf("%lf",a)
#define pfc(a)     printf("%c",a)
#define pfs(a)     printf("%s",a)
#define ci(a)      cin>>a
#define co(a)      cout<<a
#define pb(a)      push_back(a)
#define newline    printf("\n")
#define ret        return 0
#define pi         acos(-1.0)
#define mod        131071

#define loopi(n) for(int i=0;i<n;i++)
#define loopd(n) for(int i=n-1;i>=0;i--)
ll two[10005];

int main()
{
    two[0] = 1;
    two[1] = 2;
    for(int i=2;i<=10000;i++)
    {
        if(i%2) two[i] = (two[(i>>1)+1]* two[i>>1]) % mod;
        else two[i] = (two[i>>1] * two[i>>1])%mod;
        //printf("%lld  %lld",two[i],i);newline;
    }
    char s[10005]="",tmp[105];
    while(sfs(tmp) != EOF)
    {
        int len = strlen(tmp);
        strcat(s,tmp);
        if(tmp[len-1] != '#') continue;
        len = strlen(s);
        ll ans = 0;
        for(int i=0,j=len-2; i<=len-2; i++,j--)
        {
            ans += (s[j] == '1' ? two[i] : 0);
            ans %= mod;
        }
        //pfl(ans);
        pfs(ans%mod ? "NO" : "YES");
        newline;
        s[0] = '\0';
    }
    ret;
}


















