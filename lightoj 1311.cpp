#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        double v1,v2,v3,a1,a2,d,t1,t2;
        cin>>v1>>v2>>v3>>a1>>a2;
        t1 = v1/a1;
        t2 = v2/a2;
        d = (v1*t1-0.5*a1*t1*t1)+(v2*t2-0.5*a2*t2*t2);
        printf("Case %d: %.8lf %.8lf\n",i,d,v3*max(t1,t2));
    }
    return 0;
}

