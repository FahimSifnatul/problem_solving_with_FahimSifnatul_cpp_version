#include<iostream>
using namespace std;
int main()
{
   int x,count=1;
   cin>>x;
   for(int i=x;count<=6;i++)
   {
       if(i%2!=0)
       {
           cout<<i<<"\n";
           ++count;
       }
   }

  return 0;
}
