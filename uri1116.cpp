#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;

int main()
{
    int x,y,n;

       cin>>n;

       for(int i=1;i<=n;i++)
       {
           cin>> x >> y;
           if(y==0)
           {
               printf("divisao impossivel\n");
           }
           else if(y!=0)
           {

               cout<< fixed << setprecision(1) << static_cast<float>(x)/y << "\n";
           }
       }






}





