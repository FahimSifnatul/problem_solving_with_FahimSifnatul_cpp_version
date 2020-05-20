//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,a[3],b;
    a[0]=a[1]=a[2]=0;
    scanf("%lld",&n);
    while(n--)
    {
       scanf("%lld",&b);
       ++a[b%3];
    }
    printf("%lld\n",(a[0]*(a[0]-1))/2+a[1]*a[2]);
    return 0;
}
