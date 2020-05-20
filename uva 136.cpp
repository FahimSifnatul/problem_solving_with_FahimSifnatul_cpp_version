#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    long long int i,j,k=5,l,m,n,num;
    for(i=6;k<=1500;i++)
    {
       // n=sqrt(i);
        num=k;
        for(j=2;j<i;j++)
        {
        if(i%j==0)
        {
         if(j%2==0 or j%3==0 or j%5==0)
         {
            if((i/j)%2==0 or (i/j)%3==0 or (i/j)%5==0)
            {
                 ++k;
            }
            else
            {
                 k=num;
                break;
            }


         }
        }
        }
        if(k>num)
        {
            k=num+1;
            cout<<i<<endl;
        }

    }

}
