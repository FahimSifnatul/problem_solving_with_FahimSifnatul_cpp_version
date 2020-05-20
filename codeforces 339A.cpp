#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
  string s;
  int i,len,j=0;
  cin>>s;
  len=s.length();
  int a[len];
  for(i=0;i<len;i++)
  {
      if(s[i]!='+')
      {
          a[j]=(int)s[i];
          ++j;
      }
  }
  sort(a,a+j);
  j=0;
  for(i=0;i<len;i++)
  {
      if(s[i]!='+')
      {
          s[i]=(char)a[j];
          ++j;
      }
  }
  cout<<s;
  return 0;
}
