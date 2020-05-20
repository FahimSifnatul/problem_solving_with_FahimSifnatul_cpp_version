#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    long long int n,m,a,t,cnt,n1,m1;
    scanf("%I64d %I64d %I64d",&n,&m,&a);
    long long int num=n,mum=m;

    n1=n/a;
    n-=n1*a;
    n1=num-n;
    m1=m/a;
    m-=m1*a;
    m1=mum-m;
    cnt=(n1*m1)/(a*a);

    if(n>0 and m>0)
    {
        while(num>0)
        {
            num-=a;
            ++cnt;
        }
        while(mum>0)
        {
            mum-=a;
            ++cnt;
        }
        --cnt;
    }
    else if(n==0 and m>0)
    {

        while(num>0)
        {
            num-=a;
            ++cnt;
        }

    }
    else if(n>0 and m==0)
    {

        while(mum>0)
        {
            mum-=a;
            ++cnt;
        }

    }
    printf("%I64d\n",cnt);
    return 0;
}
