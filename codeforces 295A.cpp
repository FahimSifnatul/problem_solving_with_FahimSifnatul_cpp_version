#include<bits/stdc++.h>
using namespace std;

int main()
{
 string s;
 int n;
 cin>>n>>s;
 int len=s.length(),a[26],pan=0,temp;
 memset(a,0,sizeof a);
 for(int i=0;i<len;i++)
 {
     s[i]=toupper(s[i]);
     temp=(int)s[i]-'A';
     ++a[temp];
 }
 for(int i=0;i<26;i++)
 {
  if(a[i]==0)
  {
      pan=1;
      break;
  }
 }
 if(pan==0)
    cout<<"YES";
 else
    cout<<"NO";
 return 0;
}
