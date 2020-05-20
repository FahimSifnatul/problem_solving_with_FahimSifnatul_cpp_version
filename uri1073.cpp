#include<iostream>
#include<cmath>


using namespace std;


int main()
{
   int x;
   cin>>x;
   for(int i=1;i<=x;i++)
   {
       if(i%2==0)
       {
           cout<< i << "^2" << " = " << std::pow(i,2) <<"\n";

       }
   }

  return 0;
}

