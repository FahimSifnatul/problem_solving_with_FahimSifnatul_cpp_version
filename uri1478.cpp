#include<iostream>
#include<cstdio>
#include<iomanip>

using namespace std;
int main()
{
    int n,a[101][101];
    while(cin>>n && n!=0)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
              if(i==0)
              {
               a[i][j]=j+1;
              }
              else if(j==0)
              {
                  a[i][j]=i+1;
              }
              else if(i>0 && j>0)
              {
                  a[i][j]=a[i-1][j-1];
              }

            }
        }


            for(int i=0;i<n;i++)
              {
               for(int j=0;j<n;j++)
                  {
                     if(j==n-1)
                     {
                         cout<<right<<setw(3)<<a[i][j];
                     }
                     else
                         cout<<right<<setw(3)<<a[i][j]<<" ";


                  }
                    cout<<"\n";
              }
              cout<<"\n";
        }


return 0;


}




