#include<iostream>
using namespace std;
int main()
{
    long long int t,n,i,digit;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n*=567;
        n/=9;
        n+=7492;
        n*=235;
        n/=47;
        n-=498;
        if(n<0)
        {
            n*=-1;
        }
        for(i=0;i<2;i++)
        {
           digit=n%10;
           n/=10;
        }
        cout<<digit<<endl;
    }
}
