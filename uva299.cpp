#include<iostream>
#include<algorithm>
using namespace std;
long long int s(long long int l,long long int a[],long long int k, long long int count,long long int b[]);

int main()
{
  long long int t,l,a[1500],b[1500];
  while(!cin.eof() and cin>>l)
  {
    long long int k=0,count=0;
    for(int i=0;i<l;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+l);
    s(l,a,k,count,b);
  }
  return 0;
}


long long int s(long long int l,long long int a[],long long int k,long long int count, long long int b[])
{
    long long int m,temp;
    if(k<l)
    {
    if(a[k]==b[k])
    {
        ++k;
        return s(l,a,k,count,b);
    }
    else
    {
        for(m=0;m<l;m++)
        {
            if(a[m]==b[k])
            {
                break;
            }
        }
        temp=a[m];
        a[m]=a[m-1];
        a[m-1]=temp;
        if(a[k]==b[k])
        {
            ++k;
        }
        ++count;
        return s(l,a,k,count,b);
    }
    }
    cout<<"Minimum exchange operations : "<<count<<endl;
}
