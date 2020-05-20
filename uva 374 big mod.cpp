/*bismillahir rahmanir rahim*/
#include<cstdio>
using namespace std;
#define ll long long int

ll bigmod(ll b,ll p,ll m)
{
 if(p==0) return 1;
 else if(p%2==0)
    return (bigmod(b,p/2,m)*bigmod(b,p/2,m))%m;

 else
    return ((b%m)*bigmod(b,p-1,m))%m;
}

int main()
{
    long long int b,p,m;
    while(scanf("%lld %lld %lld",&b,&p,&m)==3)
     printf("%lld\n",bigmod(b,p,m));
    return 0;
}
