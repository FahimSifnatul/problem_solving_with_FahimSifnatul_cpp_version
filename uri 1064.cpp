#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int count=0;
   float a[6],avg=0;
   for(int i=0;i<6;i++)
   {
       cin>>a[i];
       if(a[i]>=0)
       {
           ++count;
           avg=avg+a[i];
       }
   }
   cout<<count<<" valores positivos\n"<<fixed<<setprecision(1)<<avg/count<<"\n";
  return 0;
}
