#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
long long int skew(long long int a[])
{
    int i,j;
    for(i=0;i<32;i++)
    {
        a[i]=1;
        for(j=1;j<=i;j++)
        {
            a[i]*=2;
        }
        a[i]-=1;
    }

}


int main()
{
    string n;
    long long int a[50],i,sum,len,temp;
    skew(a);
    while(cin>>n and n!="0")
    {
        sum=0;
        len=n.length();
      for(i=0;i<n.length();i++)
      {
          temp=static_cast<int>(n.at(i))-48;
          sum+=temp*a[len];
          --len;
      }
      cout<<sum<<endl;
    }
    return 0;
}
