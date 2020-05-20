#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
   int i,a[100],largest=0;
   for(i=1;i<=5;i++)
   {
       cin>>a[i];
       largest=max(largest,a[i]);

   }

   cout<<largest<<"\n";

   for(i=1;i<=5;i++)
   {
       if(a[i]==largest)
       {
            cout<<i<<"\n";
            break;
       }
   }






  return 0;
}




