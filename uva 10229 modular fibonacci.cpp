/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,p[21];
    long long int a,b,f;
    for(int i=0;i<=20;i++)
        p[i]=pow(2,i);

    while(scanf("%d %d",&n,&m))
    {
      a=0,b=1;
      if(n==0)
        f=0;
      else if(n==1)
        f=1;
      else
      {
          for(int i=2;i<=n;i++)
          {
           f=a+b;
           a=b;
           b=f;
          }
      }
      printf("%lld\n",f%p[m]);
    }
    return 0;
}
