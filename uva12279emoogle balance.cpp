#include<iostream>
using namespace std;
int main()
{
  int count=1,n,t,nt,treat;
  while(cin>>n and n!=0)
  {
      int a[n];
      nt=0;
      t=0;
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
          if(a[i]>0)
          {
              ++nt;
          }
          else
            ++t;
      }
      treat=nt-t;
      cout<<"Case "<<count<<": "<<treat<<endl;
      ++count;

  }
  return 0;
}
