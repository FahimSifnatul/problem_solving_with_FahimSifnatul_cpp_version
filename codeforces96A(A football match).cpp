#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main()
{
  int zero=0,one=0;
  string s;
  cin>>s;
  for(int i=0;i<s.length();i++)
  {
     if(s[i]=='0')
     {
         ++one;
         zero=0;
     }
     else
     {
         ++zero;
         one=0;
     }
     if(one==7 or zero==7)
     {
         printf("YES\n");
         break;
     }
     else if(i==s.length()-1)
     {
         printf("NO\n");
     }
  }

      return 0;
}
