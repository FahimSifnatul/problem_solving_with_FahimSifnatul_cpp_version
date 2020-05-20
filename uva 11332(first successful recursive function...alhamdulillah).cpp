#include<iostream>
using namespace std;

long long int g(long long int n);

int main()
{
    long long int m;
    while(cin>>m and m!=0)
  {
    cout<<g(m)<<endl;
  }
return 0;
}

long long int g(long long int n)
{
   long long int digit,sum=0,count=0;
   for(int i=0;n>0;i++)
   {
       digit=n%10;
       n=n/10;
       sum+=digit;
   }
   n=sum;
   for(int i=0;sum>0;i++)
   {
       digit=sum%10;
       sum=sum/10;
       ++count;
   }
   if(count>=2)
   {
       return g(n);
   }
   else
       return n;
}

