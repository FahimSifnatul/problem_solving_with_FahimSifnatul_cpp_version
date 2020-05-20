#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int k=1;k<=t;k++)
    {
       int r1,c1,r2,c2;
       scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
       printf("Case %d: ",k);
       if((r1%2==0 and c1%2==0) or (r1%2!=0 and c1%2!=0))
       {
          if((r2%2!=0 and c2%2==0) or (r2%2==0 and c2%2!=0))
            printf("impossible");
          else if(abs(r1-r2) == abs(c1-c2))
            printf("1");
          else
            printf("2");
       }
       else
       {
           if((r2%2==0 and c2%2==0) or (r2%2!=0 and c2%2!=0))
            printf("impossible");
           else if(abs(r1-r2) == abs(c1-c2))
            printf("1");
           else
            printf("2");
       }
       printf("\n");
    }
  return 0;
}










