#include<iostream>
using namespace std;
int main()
{
   int n,in=0,out=0;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       if(a[i]>=10 && a[i]<=20)
       {
           ++in;
       }
       else if(a[i]<10 || a[i]>20)
       {
           ++out;
       }
   }

   cout<<in<<" in\n";
   cout<<out<<" out\n";

  return 0;
}


