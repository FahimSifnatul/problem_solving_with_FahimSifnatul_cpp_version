#include<bits/stdc++.h>
using namespace std;

int main()
{
 string s;
 int n,t,i,j;
 scanf("%d %d",&n,&t);
 cin>>s;
 for(i=0;i<t;i++)
 {
    j=s.length()-1;
    while(j>0)
    {
       if(s[j]=='G' and s[j-1]=='B')
       {
          swap(s[j],s[j-1]);
          j-=2;
       }
       else
       --j;
    }

 }
 cout<<s;
 return 0;
}
