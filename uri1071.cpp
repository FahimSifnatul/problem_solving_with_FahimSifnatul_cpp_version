#include<iostream>
using namespace std;
int main()
{
   int X,Y,temp,total=0;
   cin>>X;
   cin>>Y;

   if(X>Y)
   {
      temp=Y;
      Y=X;
      X=temp;
   }

   for(int i=X+1;i<Y;i++)
   {
       if(i%2!=0)
       {

           total=total+i;

       }
   }
   cout<<total<<"\n";

  return 0;
}

