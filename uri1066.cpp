#include<iostream>
using namespace std;
int main()
{
   int even=0,odd=0,pos=0,neg=0,a[5];
   for(int i=0;i<5;i++)
   {
       cin>>a[i];
       if(a[i]%2==0)
       {
           ++even;
       }
       if(a[i]%2!=0)
       {
           ++odd;
       }
       if(a[i]>0)
       {
           ++pos;
       }
       if(a[i]<0)
       {
           ++neg;
       }

   }
   cout<<even<<" valor(es) par(es)\n";
   cout<<odd<<" valor(es) impar(es)\n";
   cout<<pos<<" valor(es) positivo(s)\n";
   cout<<neg<<" valor(es) negativo(s)\n";
  return 0;
}

