#include<iostream>

using namespace std;

int main()
{
   int x;
   cin>>x;
   for(int i=1;i<=10000;i++)
   {
       if(i%x==2)
       {
           cout<< i <<"\n";

       }
   }

  return 0;
}


