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
int A,B,a[3],b[3],ab[205],ba[205],ans[205];

void calc()
{
    int carry = 0;
    for(int k=1;k<B;k++)
    {
        for(int j=0;j<3;j++)
        {
            loopi(205)
            {
                carry += ab[i]*a[j] + ans[i+j];
                ans[i+j] = carry % 10;
                carry /= 10;
            }
        }
        loopi(205)ab[i] = ans[i], ans[i] = 0;
    }
    for(int k=1;k<A;k++)
    {
        for(int j=0;j<3;j++)
        {
            loopi(205)
            {
                carry += ba[i]*b[j] + ans[i+j];
                ans[i+j] = carry % 10;
                carry /= 10;
            }
        }
        loopi(205)ba[i] = ans[i], ans[i] = 0;
    }
    loopi(205)
    {
        if(carry) ++ba[i], carry = 0;
        if(ab[i] < ba[i])
        {
           carry = 1;
           ab[i] += 10;
        }
        ans[i] = ab[i] - ba[i];
    }
    if(carry)
    {
        p("-");
        carry = 0;
        loopi(205)
        {
           if(carry) ++ab[i], carry = 0;
           if(ba[i] < ab[i])
           {
               carry = 1;
               ba[i] += 10;
           }
           ans[i] = ba[i] - ab[i];
        }
    }
    bool ok = 0;
    loopd(205)
    {
        if(ans[i] and !ok) ok = 1;
        if(ok)pf(ans[i]);
    }
}

int main()
{
    int t1,t2;
    sf(t1),sf(t2);
    A = t1, B = t2;
    loopi(3)
    {
        a[i] = ab[i] = t1 % 10, t1 /= 10;
        b[i] = ba[i] = t2 % 10, t2 /= 10;
    }
    calc();
    newline;
    ret;
}
