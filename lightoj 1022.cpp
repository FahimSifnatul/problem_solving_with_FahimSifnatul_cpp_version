#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)

int main()
{
    int t,cs=1;
    scanf("%d",&t);
    double n,r;
    while(t--)
    {
        scanf("%lf",&n);
        r=4*n*n-pi*n*n;
        printf("Case %d: %.2lf\n",cs,r);
        ++cs;
    }
    return 0;
}
