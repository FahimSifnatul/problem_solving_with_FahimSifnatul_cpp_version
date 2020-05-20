//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
#define pi acos(0.0)

double bisection(double left,double right,double R,int n)
{
    double r=(left+right)/2.0;
 if(abs(n*r-2*pi*(R-r))<=.000001)
    return r;
 else if(n*r>=2*pi*(R-r))
    return bisection(left,r,R,n);
 else
    return bisection(r,right,R,n);
}

int main()
{
    int t,cs=0;
    scanf("%d",&t);
    while(t--)
    {
        double R,r;
        int n;
        scanf("%lf %d",&R,&n);
        printf("Case %d: %.10lf\n",++cs,bisection(0.0,R,R,n));
    }
    return 0;
}
