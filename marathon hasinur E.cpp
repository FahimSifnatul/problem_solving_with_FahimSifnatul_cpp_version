#include<cstdio>

long long int check(long long int a[],long long int i,long long int n)
{
  int flag=0,j;

}

int main()
{
   long long int n,a[50],sum=0;
   scanf("%lld",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%lld",&a[i]);
   }
   for(int i=0;i<n;i++)
   {
       xx:
           //printf("%lld\n",a[i]);
         long long int  flag=0;
       for(int j=0;j<n;j++)
      {
      if(j!=i)
      {
          if(a[i]==a[j])
            a[i]-=1;
            ++flag;

      }
      }
  if(flag>0)
    goto xx;
       printf("%lld\n",a[i]);

   }

for(int i=0;i<n;i++)
   {
       //printf("%lld\n",a[i]);
       if(a[i]>0)
       sum+=a[i];
   }
   //printf("%lld\n",sum);
   return 0;
}
