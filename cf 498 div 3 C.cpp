#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll ma = 0,sum1=0,sum3=0;
    for(int i=-1,j=n;i<j;)
    {
        if(sum1 == sum3)
        {
            ma = max(ma,sum1);
            sum1 += a[++i];
            sum3 += a[--j];
        }
        else if(sum1 > sum3)
        {
            sum3 += a[--j];
        }
        else
            sum1 += a[++i];
    }
    cout<<ma<<endl;
    return 0;
}












