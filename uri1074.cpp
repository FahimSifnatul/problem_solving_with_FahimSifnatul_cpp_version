#include<iostream>

using namespace std;

int main()
{
   int x;
   cin>>x;
   int a[x];
   for(int i=1;i<=x;i++)
   {
       cin>>a[i];
       if(a[i]==0)
       {
           cout<<"NULL\n";
       }
       else if(a[i]<0 && a[i]%2!=0)
       {
           cout<<"ODD NEGATIVE\n";
       }
       else if(a[i]>0 && a[i]%2!=0)
       {
           cout<<"ODD POSITIVE\n";
       }
       else if(a[i]<0 && a[i]%2==0)
       {
           cout<<"EVEN NEGATIVE\n";
       }
       else if(a[i]>0 && a[i]%2==0)
       {
           cout<<"EVEN POSITIVE\n";
       }

   }

  return 0;
}


