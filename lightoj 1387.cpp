#include<bits/stdc++.h>
using namespace std;

int main()
{
 string s;
 int t,cs=1;
 scanf("%d",&t);
 while(t--)
 {
     int T,sum=0,flg=0,donate;
     scanf("%d",&T);
     while(T--)
     {
      cin>>s;
      if(s=="donate")
      {
          scanf("%d",&donate);
          sum+=donate;
      }
      else if(flg==0)
      {
          cout<<"Case "<<cs<<":\n";
          printf("%d\n",sum);
          ++cs;
          ++flg;
      }
      else
          printf("%d\n",sum);
     }
 }
 return 0;
}
