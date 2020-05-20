#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s,str;
  int n,i,j=0,flag,cnt=0;
  scanf("%d",&n);
  char c[n];
  cin>>s;
  int len=s.length(),half1=0,half2=0;
  flag=0;
  for(i=0;i<len;i++)
  {
    if(s[i]!='0' or flag>0)
    {
        c[j]=s[i];
        ++j;
        ++flag;
    }
    if(s[i]=='0' and flag==0)
    {
        ++cnt;
    }
  }
  c[j]='\0';
  len=strlen(c);
  flag=0;
  for(i=0;i<len;i++)
  {
     if(c[i]!='4' and c[i]!='7')
     {
         ++flag;
         goto xx;
     }
  }
  for(i=0,j=len-1;i<len/2;i++,j--)
  {
      half1+=(int)c[i]-'0';
      half2+=(int)c[j]-'0';
  }
  xx:
  if(half1==half2 and flag==0 and cnt==0)
    printf("YES\n");
  else
    printf("NO\n");
  return 0;

}
