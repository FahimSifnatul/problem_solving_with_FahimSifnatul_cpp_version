#include<bits/stdc++.h>
using namespace std;

int main()
{
 string s;
 cin>>s;
 int low=0,up=0,len=s.length(),flg;
 for(int i=0;i<len;i++)
 {
  if(s[i]==toupper(s[i]))
    ++up;
  else
    ++low;
 }
 if(up>low)
 {
   for(int i=0;i<len;i++)
  {
   s[i]=toupper(s[i]);
  }
 }
 else
 {
   for(int i=0;i<len;i++)
   {
    s[i]=tolower(s[i]);
   }
 }
 cout<<s;
 return 0;
}
