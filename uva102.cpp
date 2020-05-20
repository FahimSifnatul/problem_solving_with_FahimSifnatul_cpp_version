#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
   long long int a[12],i,sum1,sum2,sum3,sum4,sum5,sum6;
   while(1)
   {
      for(i=0;i<9;i++)
      {
       cin>>a[i];
      }

      sum1=a[1]+a[2]+a[3]+a[4]+a[6]+a[8];
      sum2=a[1]+a[2]+a[3]+a[5]+a[6]+a[7];
      sum3=a[0]+a[1]+a[4]+a[5]+a[6]+a[8];
      sum4=a[0]+a[1]+a[3]+a[5]+a[7]+a[8];
      sum5=a[0]+a[2]+a[4]+a[5]+a[6]+a[7];
      sum6=a[0]+a[2]+a[3]+a[4]+a[7]+a[8];

      long long int m;
      m = min(sum5,sum6);
      m=min(sum4,m);
      m=min(sum3,m);
      m=min(sum2,m);
      m=min(sum1,m);
      if(m==sum1)
      {
          cout<<"BCG "<<m;
      }
      else if(m==sum2)
      {
          cout<<"BGC "<<m;
      }
      else if(m==sum3)
      {
          cout<<"CBG "<<m;
      }
      else if(m==sum4)
      {
          cout<<"CGB "<<m;
      }
      else if(m==sum5)
      {
          cout<<"GBC "<<m;
      }
      else if(m==sum6)
      {
          cout<<"GCB "<<m;
      }
   }
   return 0;
}
