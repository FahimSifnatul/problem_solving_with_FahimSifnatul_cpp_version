/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    if(n>=0)
        printf("%d",n);
    else
    {
        int temp=n*-1;
        int last=temp%10,blast=temp%100;
        blast/=10;
        //cout<<last<<'\n';
        temp=min(last,blast);
        n*=-1;
        n/=100;
        //cout<<n<<'\n';
        n=n*10+temp;
        //cout<<n<<'\n';
        if(n!=0)
        printf("-%d",n);
        else
        printf("%d",n);
        //cout<<n;
    }
}
