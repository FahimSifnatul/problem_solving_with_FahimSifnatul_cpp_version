#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
   int n;
   float x,y,z;
   cin>>n;
   for(int i=1;i<=n;i++)
   {

     cin>> x >> y >> z;
     cout << fixed << setprecision(1) << x*.2+y*.3+z*.5 <<"\n";

   }

  return 0;
}



