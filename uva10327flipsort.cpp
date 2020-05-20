#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  int t,l,a[1500],b[1500],i,j;
  while(!cin.eof() and cin>>l)
  {
    long long int count=0;
    for(i=0;i<l;i++)
    {
        cin>>a[i];

    }

    for(i=0;i<l-1;i++)
    {
        for(j=0;j<l-1;j++)
        {
        if(a[j]>a[j+1])
        {
            swap(a[j],a[j+1]);
            ++count;
        }
        }
    }
    cout<<"Minimum exchange operations : "<<count<<endl;
  }
  return 0;
}


