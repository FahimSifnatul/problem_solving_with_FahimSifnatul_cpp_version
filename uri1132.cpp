#include<iostream>

using namespace std;

int main()
{
   int x,y,temp;
   double sum=0;

   cin>>x;
   cin>>y;

   if(x>y)
   {
       temp=y;
       y=x;
       x=temp;
   }

   for(int i=x;i<=y;i++)
   {

       if(i%13!=0)
       {
           sum=sum+i;
       }

   }
   cout<<sum<<"\n";











return 0;

}
