#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int n;
    double j=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {

      printf("%.0lf %.0lf %.0lf\n",j,j*j,j*j*j);
      printf("%.0lf %.0lf %.0lf\n",j,j*j+1,j*j*j+1);
      j++;

    }





    return 0;

}


