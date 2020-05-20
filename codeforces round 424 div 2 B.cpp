//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
string s1,s2,s,res;
map<char,char>mp;

int main()
{
 cin>>s1>>s2>>s;
 for(int i=0;i<26;i++)
     mp[s1[i]]=s2[i];
 int len=s.length();
 for(int i=0;i<len;i++)
 {
  if(s[i]>='0' and s[i]<='9')
     res+=s[i];
  else if(s[i]==toupper(s[i]))
     res+=toupper(mp[tolower(s[i])]);
  else
     res+=mp[s[i]];
 }
 cout<<res<<endl;
 return 0;
}












