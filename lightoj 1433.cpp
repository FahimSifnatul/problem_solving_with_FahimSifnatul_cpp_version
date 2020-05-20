//bismillahir rahmanir rahim//
#include<bits/stdc++.h>
using namespace std;

//2
//5094 5117 3084 8485 7104 1749
//0     1     2   3     4    5

int main()
{
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        int a[6];
        for(int i=0;i<6;i++)
            scanf("%d",&a[i]);
        double ab_2=sqrt((a[2]-a[4])*(a[2]-a[4])+(a[3]-a[5])*(a[3]-a[5]))/2.00;
        double r=sqrt((a[0]-a[4])*(a[0]-a[4])+(a[1]-a[5])*(a[1]-a[5]));
        double temp;
        if(ab_2==0 and r==0)
            temp=0.00;
        else
            temp=ab_2/r;
        double angle=2*asin(temp);
        double result=r*angle;
        printf("Case %d: %.8lf\n",cs,result);
        ++cs;
    }
    return 0;
}
