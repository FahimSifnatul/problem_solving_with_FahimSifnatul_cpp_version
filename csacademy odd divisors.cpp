//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
long long int sum;

int even(long long int n)
{
  if(n%2!=0)return n;
  else even(n/2);
}

int main()
{
    int t;
    scanf("%d",&t);
    long long int a,b;
    while(t--)
    {
        sum=0;
        scanf("%lld %lld",&a,&b);

        if(b%2!=0)sum+=((b+1)/2)*((b+1)/2);
        else sum+=(b/2)*(b/2);
        sum-=(a/2)*(a/2);

        cout<<sum<<endl;
    }
}






