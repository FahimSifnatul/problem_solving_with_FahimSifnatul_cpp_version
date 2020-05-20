#include<iostream>
#include<cstdio>
using namespace std;
long long int fact(long long int x,long long int y)
{
   long long int X=1,Y=1;
   if(x!=0 && y!=0)
   {
   for(int i=x;i>=1;i--)
   {
       X=X*i;
   }
   for(int i=y;i>=1;i--)
   {
       Y=Y*i;
   }
   }

   else if(x!=0)
   {
   for(int i=x;i>=1;i--)
   {
       X=X*i;
   }

       Y=1;

   }

   else if(y!=0)
   {
   for(int i=y;i>=1;i--)
   {
       Y=Y*i;
   }

       X=1;

   }
   return X+Y;


}

int main()
{
   long long int x,y;

       while(scanf("%lld %lld",&x,&y)!=EOF)
       {
          printf("%lld\n",fact(x,y));

       }



       return 0;


}








