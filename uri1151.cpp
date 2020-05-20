#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    if(n==0)
    {
        cout<<"0\n";
    }
    else if(n==1)
    {
        cout<<"0 1\n";
    }
    else if(n>1)
    {
        int a[n];
        a[0]=0;
        a[1]=1;
        cout<<"0 1 ";
        for(int i=1;i<=n-2;i++)
      {
        a[i+1]=a[i]+a[i-1];
        if(i!=n-2)
        {
            cout<<a[i+1]<<" ";
        }
        else
            cout<<a[i+1]<<"\n";
      }

    }




}
