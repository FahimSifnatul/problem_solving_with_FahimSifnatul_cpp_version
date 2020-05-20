#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x=0,y=0;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i],x+=a[i];
    for(int i=0;i<n;i++)cin>>b[i],y+=b[i];
    x >= y ? cout<<"Yes" : cout<<"No";
    return 0;
}
