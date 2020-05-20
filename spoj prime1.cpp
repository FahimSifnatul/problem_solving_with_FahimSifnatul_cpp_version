#include<bits/stdc++.h>
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
#define pfs(a)     printf("%s",s)
#define ci(a)      cin>>a
#define co(a)      cout<<a
#define pb(a)      push_back(a)
#define newline    printf("\n")
#define ret        return 0
#define pi         acos(-1.0)
#define mod        1000000007

#define loopi(n) for(int i=0;i<n;i++)
#define loopd(n) for(int i=n-1;i>=0;i--)
vector<int>prime;
bool ok[1000000002];

void sieve()
{
    ok[1] = true;
    for(int i=3;i<=31607;i+=2)
    {
        if(!ok[i])
        {
           prime.pb(i);
           for(int j=i*i;j<=31607;j+=2*i)
           {
               ok[j] = true;
           }
        }
    }
}

void cnt(int n,int m)
{
    int sq = sqrt(m+1),i,j,it = 0;

    if(n <= 2)
    {
        pf(2), i = 3, newline;
        if(n == 2)++n;
    }
    else if(n%2) i = n;
    else i = ++n;

    while(prime[it] <= sq and it < 3400)
    {
        j = n % prime[it];
        if(j)
        {
            j = n + (prime[it] - j);
        }
        else j = n;
        if(j == prime[it])j += (prime[it]<<1);
        while(j<=m)
        {
            ok[j] = true;
            j += prime[it];
        }
        ++it;
    }
    while(i<=m)
    {
        if(!ok[i])pf(i),newline;
        i += 2;
    }
}

int main()
{
    int t,n,m;
    sieve();
    sf(t);
    while(t--)
    {
        sf(n),sf(m);
        cnt(n,m);
        newline;
    }
    newline;
    ret;
}










