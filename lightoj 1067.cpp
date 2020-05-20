//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
signed long long int f[1000005];

int main()
{
 f[0]=f[1]=1;
 for(int i=2;i<=1000000;i++)
    f[i]=((f[i-1]%1000003)*(i%1000003))%1000003;
 int n,r,t,cs=0; long long int result;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%d%d",&n,&r);
  printf("Case %d: %llu\n",++cs,result);
  //cout<<f[50]<<' '<<f[100];
 }
 return 0;
}
