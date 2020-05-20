/*bismillahir rahmanir rahim*/
//incomplete
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    if(n>=m)
      printf("%d",n-m);
    else
    {
        if(m%2==0)
        {
          if(n>=m/2)
            printf("%d",n-m/2+1);
          else
          {
           int t1=m,t2=n;
           while(true)
           {
            ;
           }
          }
        }
        else
        {
          if(n>m/2)
            printf("%d",2*n-m+1);
          else
          {
            int temp=m/4+1;
            printf("%d",4*n-m+1);
          }

        }
    }

}
