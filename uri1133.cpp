#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int x,y,temp;
    cin>>x;
    cin>>y;

    if(x>y)
   {
       temp=y;
       y=x;
       x=temp;
   }

   for(int i=x+1;i<y;i++)
   {

       if(i%5==2 || i%5==3)
       {
           cout<<i<<"\n";
       }

   }

    return 0;



















}
