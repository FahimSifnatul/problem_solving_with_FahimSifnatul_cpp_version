#include<iostream>
#include<cstdio>


using namespace std;

int main()
{
    int x,y;

    cin>>x;
    cin>>y;
    for(int i=1;i<=y;i+=x)
    {
       int n=i;
       for(int j=x;j>=1;j--)
       {
           if(n<=y)
           {
           cout<<n;

           }
           if(j==1)
           {
               cout<<"\n";
           }
           else if(j!=1 && n<=y)
           {
               cout<<" ";
               n++;
           }
           else if(j!=1 && n==y+1)
           {
               cout<<"\n";
           }

       }


    }





    return 0;

}



