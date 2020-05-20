#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,rem[5],i,yr;
 scanf("%d",&n);
 yr=n;
 while(true)
 {
     i=0;
     n+=1;
     yr+=1;
     while(n>0)
     {
       rem[i]=n%10;
       n/=10;
       //cout<<rem[i]<<endl;
       ++i;
     }
     //cout<<i<<endl;
     if(rem[0]!=rem[1] and rem[0]!=rem[2] and rem[0]!=rem[3] and rem[1]!=rem[0] and rem[1]!=rem[2] and rem[1]!=rem[3] and rem[2]!=rem[1] and rem[2]!=rem[0] and rem[2]!=rem[3] and rem[3]!=rem[1] and rem[3]!=rem[2] and rem[3]!=rem[0])
     {
         printf("%d",yr);
         return 0;
     }
     else
     {
         n=yr;
     }
 }
}
