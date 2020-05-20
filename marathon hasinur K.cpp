#include<cstdio>

int main()
{
    int sum,n,i;
    while(scanf("%d",&n)==1 and n!=0)
    {
        sum=0;
        for(i=n;i>0;i--)
        {
            sum+=i*i;
        }
        printf("%d\n",sum);

    }
    return 0;
}
