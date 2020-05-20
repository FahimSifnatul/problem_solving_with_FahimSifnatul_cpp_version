#include<bits/stdc++.h>
using namespace std;

int main()
{
 string s,temp="";
 cin>>s;
 int len=s.length(),i,flg=0;
 char c=' ';
 for(i=0;i<len;)
 {
  if(s[i]=='W' and s[i+1]=='U' and s[i+2]=='B' and flg==0)
    i+=3;
  else if(s[i]=='W' and s[i+1]=='U' and s[i+2]=='B')
  {
    i+=3;
    temp+=c;
  }
  else
  {
      temp+=s[i];
      ++flg;
      ++i;
  }
 }
 cout<<temp;
 return 0;
}
