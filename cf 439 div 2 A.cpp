#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)

#define sf(a) scanf("%d",&a)
#define sfl(a) scanf("%lld",&a)
#define sfd(a) scanf("%lf",&a)
#define pf(a) printf("%d",a)
#define pfl(a) printf("%lld",a)
#define pfd(a) printf("%lf",a)
#define pfc(a) printf("%c",a)
#define ci(a) cin>>a
#define co(a) cout<<a
#define pb(a) push_back(a)
#define newline printf("\n")

#define loopi(n) for(int i=0;i<n;i++)
#define loopd(n) for(int i=n-1;i>=0;i--)

#define ll long long int

int main()
{
    fastio;
    int n;
    sf(n);
    int a[n],b[n],ans = 0;
    loopi(n)
       sf(a[i]);
    loopi(n)
       sf(b[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           ll check = a[i] ^ b[j];
           if(check > 0 and check <= 2*n)
              ++ans;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           ll check = b[i] ^ a[j];
           if(check > 0 and check <= 2*n)
              ++ans;
        }
    }
    ans%2 ? printf("Koyomi") : printf("Karen");
    newline;
    return 0;
}










