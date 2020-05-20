#include<stdio.h>
int main()
{
    long long int t;
    scanf("%lld",&t);
    long long int s,sum,i,j,k = 1;
    while(t--)
    {
        //printf("\n");
        scanf("%lld",&s);
        sum = 0;
        for(i = 0 ; i<s ; i++)
        {
            scanf("%lld",&j);
            if(j>=0)
            sum +=j;
        }

            printf("Case %lld: %lld\n",k,sum);
            ++k;

    }

    return 0;
}
