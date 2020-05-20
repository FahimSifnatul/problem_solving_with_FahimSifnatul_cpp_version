#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  int flag=0,len,i;
  cin>>s;
  len=s.length();
  for(i=0;i<len;i++)
  {
     if(s[i]=='h' and flag==0)
        ++flag;
     else if(s[i]=='e' and flag==1)
        ++flag;
     else if(s[i]=='l' and (flag==2 or flag==3))
     {
         ++flag;
     }
     else if(s[i]=='o' and flag==4)
     {
        ++flag;
        break;
     }

  }
  if(flag==5)
    cout<<"YES";
  else
    cout<<"NO";
  return 0;
}
