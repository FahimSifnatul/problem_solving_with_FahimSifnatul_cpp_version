#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s;
while(cin>>s and s!=".")
{
  string temp,stemp;
  long long int len=s.length(),cnt=0,templen=0,j=0;
  for(int i=len-1;i>=0;i--)
  {
      if(s[0]!=s[i])
      {
          ++templen;
          temp+=s[i];
          stemp+=s[j];
          ++j;
      }
      else if(s[0]==s[i])
      {
          ++templen;
          temp+=s[i];
          stemp+=s[j];
          ++j;
         reverse(temp.begin(),temp.end());
        // cout<<stemp<<endl;
         if(temp==stemp)
         {
             if(len%templen!=0)
             {
                 cnt=1;
                 cout<<len<<" "<<templen<<endl;
                 break;
             }
             else
             {
               for(int k=0;k<len;k+=templen)
               {
                 // cout<<k<<endl;
                  for(int m=k,l=0;l<templen;m++,l++)
                  {
                      if(s[m]!=temp[l])
                      {
                          cout<<s[m]<<" "<<temp[m]<<endl;
                          cnt=1;
                          goto xx;
                      }
                  }
                  ++cnt;
               }
             }
         }
         else
         {
             reverse(temp.begin(),temp.end());
         }
      }
  }
  xx:
  cout<<cnt<<endl;
}
return 0;
}
