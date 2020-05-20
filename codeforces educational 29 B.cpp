//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int a[2*n];
    for(int i=0;i<2*n;i++)cin>>a[i];
    sort(a,a+2*n);
    int dif[n];
    for(int i=1,j=0;i<2*n;i+=2,j++)
        dif[j] = a[i]-a[i-1];
    int temp=0, res=100000;
    for(int i = 0; i < n; i++) temp += dif[i];
    for(int i = 0; i < n; i++)
    {
       res = min(res,temp-dif[i]) ;
    }
    temp = 0;
    for(int i = 2; i < 2*n; i += 2)
    {
        temp += a[i]-a[i-1];
    }
    cout<<min(res,temp)<<endl;
    return 0;
}






