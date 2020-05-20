#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a[25],t,n,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
      cin>>n;
      for(int i=0;i<n;i++)
      {
         cin>>a[i];
      }
      sort(a,a+n,greater<int>());
      for(int i=0;i<n-1;i++)
      {
        sum+=a[i]-a[i+1];
      }
      cout<<2*sum<<endl;
    }
}
