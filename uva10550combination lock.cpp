#include<cstdio>
using namespace std;
int main()
{
   int a,b,c,d,cnt;
   while(scanf("%d %d %d %d",&a,&b,&c,&d)==4)
   {
       if(a==0 and b==0 and c==0 and d==0)
       {
           break;
       }
       cnt=1080;
       if(b>a)
        cnt+=(40-b+a)*9;
       else
        cnt+=(a-b)*9;
       if(b>c)
        cnt+=(40-b+c)*9;
       else
        cnt+=(c-b)*9;
       if(d>c)
        cnt+=(40-d+c)*9;
       else
        cnt+=(c-d)*9;
       printf("%d\n",cnt);
   }
   return 0;
}
