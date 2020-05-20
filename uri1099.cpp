#include<iostream>
using namespace std;

int main()
{
    int x,y,n,temp,total=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       total=0;
       cin>> x >> y;
       if(x>y)
       {
           temp=x;
           x=y;
           y=temp;
       }
       for(int j=x+1;j<y;j++)
       {

       if(j%2!=0)
       {
           total=total+j;
       }

       }

       cout<< total << "\n";

    }
}



