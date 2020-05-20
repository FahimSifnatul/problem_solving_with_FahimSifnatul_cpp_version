/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;
double result[1000001];

int main()
{
    int n,base;
    int t,cs=1;
    scanf("%d",&t);
    for(int i=1;i<=1000000;i++)
    {
        if(i==1)
            result[i]=log(i);
        else
            result[i]=result[i-1]+log(i);
    }
         result[0]=0;
    while(t--)
    {
       scanf("%d %d",&n,&base);
       double temp=result[n]/log(base);
       printf("Case %d: %d\n",cs,(int)temp+1);
       ++cs;
    }
}
