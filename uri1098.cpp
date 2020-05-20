#include<iostream>
using namespace std;

int main()
{
    double i,j;
    for(i=0;i<=2;i+=0.2)
    {
        for(j=1+i;j<=3+i;j++)
        {

         cout<< "I=" << i << " J=" << j << "\n";

        }
    }
}


