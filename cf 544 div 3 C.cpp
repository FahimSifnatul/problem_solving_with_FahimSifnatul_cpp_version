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
#define pfs(a)     printf("%s",a)
#define ci(a)      cin>>a
#define co(a)      cout<<a
#define pb(a)      push_back(a)
#define newline    printf("\n")
#define ret        return 0
#define pi         acos(-1.0)
#define mod        1000000007

#define loopi(n) for(int i=0;i<n;i++)
#define loopd(n) for(int i=n-1;i>=0;i--)
int ans=1;
int b(int a[],int n)
{
    for(int i=0,j=1;j<n;j++)
    {
        if(a[j]-a[i] <= 5)
            ans = max(ans,j-i+1);
        else
            ++i;
    }
    return ans;
}

int main()
{
    int n;
    sf(n);
    int a[n],mx=1,temp=1;
    loopi(n)
    {
        sf(a[i]);
    }
    sort(a,a+n);
    pf(b(a,n));
    newline;
    ret;
}














