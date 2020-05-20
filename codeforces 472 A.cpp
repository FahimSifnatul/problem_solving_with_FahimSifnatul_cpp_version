#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,flg=0,f,s,sq,i;
    bool btr=true;
    scanf("%I64d",&n);
    if(n%2==0)
    printf("%I64d 4",n-4);
    else
    {
      f=(n+1)/2;
      s=n/2;
      if(f%2==0)
        swap(f,s);
      while(btr)
      {

        if(flg%2==0)
        {

         sq=sqrt(f);
         for(i=3;i<=sq;i++)
         {
             if(f%i==0)
             {
                 printf("%I64d %I64d",f,s);
                 btr=false;
                 break;
             }
         }
        }
         else
        {
         sq=sqrt(s);
         for(i=3;i<=sq;i++)
         {
             if(s%i==0)
             {
                 printf("%I64d %I64d",f,s);
                 btr=false;
                 break;
             }
         }
        }
        ++flg;
        ++f;
        --s;
      }
    }
   return 0;
}
