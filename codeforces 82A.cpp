#include<bits/stdc++.h>
using namespace std;

int main()
{
 long long int n,i=1,j=1,num,temp;
 scanf("%I64d",&n);
 num=n;
 while(n>0)
 {
  if(n-5*j<=0)
  {
   temp=n;
   break;
  }
  n-=5*j;
  j*=2;
  //cout<<temp<<endl;
 }
 if(num<=5)
 {
 if(temp==1)
 cout<<"Sheldon";
 else if(temp==2)
 cout<<"Leonard";
 else if(temp==3)
 cout<<"Penny";
 else if(temp==4)
 cout<<"Rajesh";
 else if(temp==5)
 cout<<"Howard";
 }
 else
 {
 if(temp/j==0)
 cout<<"Sheldon";
 else if(temp/j==1)
 cout<<"Leonard";
 else if(temp/j==2)
 cout<<"Penny";
 else if(temp/j==3)
 cout<<"Rajesh";
 else if(temp/j==4)
 cout<<"Howard";
 }
 return 0;
 //else if(temp==1 )
 //cout<<j<<endl;
}
