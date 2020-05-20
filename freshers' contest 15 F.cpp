#include<cstdio>
#include<cmath>

int main()
{
    long long int sq,i,j,n,rev,rem,num,flag;
    while(scanf("%lld",&n)==1)
    {
        num=n;
        flag=0;
        sq=sqrt(n);
        for(i=2;i<=sq;i++)
        {
            if(n%i==0)
            {
              flag+=2;
              break;
            }
        }
        rev=0;
        while(n>0)
        {
            rem=n%10;
            n/=10;
            rev=rev*10+rem;
        }
        sq=sqrt(rev);
        for(i=2;i<=sq;i++)
        {
            if(rev%i==0)
            {
              ++flag;
              break;
            }
        }
        if(flag>=2)
            printf("%lld is not prime.\n",num);
        else if(flag==1 or rev==num)
            printf("%lld is prime.\n",num);
        else
            printf("%lld is emirp.\n",num);
    }
    return 0;
}
