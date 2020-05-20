#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,cnt=1,i;
    scanf("%I64d %I64d",&n,&k);
    if(n%2==0)
    {
        if(k<=n/2)
            printf("%I64d\n",2*k-1);
        else
            printf("%I64d\n",2*(k-n/2));
    }
    else
    {
        if(k<=(n+1)/2)
            printf("%I64d\n",2*k-1);
        else
            printf("%I64d\n",2*(k-(n+1)/2));
    }
    return 0;
}
