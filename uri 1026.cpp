#include<bits/stdc++.h>
using namespace std;

int main()
{
 string n1,n2,temp;
 unsigned long int a,b,rem,len,sum,num;
 while(!cin.eof() and cin>>a>>b)
 {
  n1="";
  n2="";
  while(a>0)
  {
   rem=a%2+'0';
   n1+=(char)rem;
   a/=2;
  }
  reverse(n1.begin(),n1.end());
  while(b>0)
  {
   rem=b%2+'0';
   n2+=(char)rem;
   b/=2;
  }
  reverse(n1.begin(),n1.end());
  if(n1.length()>=n2.length())
  {
      temp=n1;
      len=n2.length();
      for(int i=0;i<len;i++)
      {
          if(n1[i]=='1' and n2[i]=='1')
            temp[i]='0';
          else if(n1[i]=='0' and n2[i]=='1')
            temp[i]='1';
      }
  }
  else
  {
      temp=n2;
      int len=n1.length();
      for(int i=0;i<len;i++)
      {
          if(n1[i]=='1' and n2[i]=='1')
            temp[i]='0';
          else if(n2[i]=='0' and n1[i]=='1')
            temp[i]='1';
      }
  }
  len=temp.length();
  reverse(temp.begin(),temp.end());
  sum=0;
  int j=0;
  while(len--)
  {
   num=(int)temp[j]-'0';
   for(int i=0;i<len;i++)
   {
      num*=2;
   }
   sum+=num;
   ++j;
  }
  //cout<<n1<<" "<<n2<<" "<<temp<<endl;
  cout<<sum<<endl;
 }
 return 0;
}
