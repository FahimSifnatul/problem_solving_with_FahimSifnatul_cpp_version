#include<bits/stdc++.h>
using namespace std;

int main()
{
  int i,j,len,flag=0;
  string s,S;
  cin>>s;
  S=s;
  len=s.length();
  if(s[0]==toupper(s[0]))
  {
     for(i=0;i<len;i++)
     {
         if(s[i]>='A' and s[i]<='Z')
            S[i]=tolower(s[i]);
         else
         {
             ++flag;
         }
     }
  }
  else if(s[0]==tolower(s[0]))
  {
      S[0]=toupper(s[0]);
      for(i=1;i<len;i++)
     {
         if(s[i]>='A' and s[i]<='Z')
            S[i]=tolower(s[i]);
         else
         {
             ++flag;
         }
     }
  }
  if(flag==0)
    cout<<S;
  else
    cout<<s;
  return 0;
}
