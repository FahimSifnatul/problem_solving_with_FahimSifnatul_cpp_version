/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
 string s;
 cin>>s;
 int a[26],len=s.size();
 memset(a,0,sizeof a);
 for(int i=0;i<len;i++)
 {
  ++a[s[i]-'a'];
  for(int j=0;j<(int)s[i]-'a';j++)
  {
   if(a[j]==0)
   {
       cout<<"NO\n";
       return 0;
   }
  }
 }
 cout<<"YES\n";
 return 0;
}
