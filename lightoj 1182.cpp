#include<bits/stdc++.h>
using namespace std;

int check(int n,int cs)
{
 string s="";
 int cnt=0,rem;
 while(n>0)
 {
   rem=n%2;
   s+=(char)rem+'0';
   n/=2;
 }
 reverse(s.begin(),s.end());
 int len=s.length();
 for(int i=0;i<len;i++)
 {
   if(s[i]=='1')
    ++cnt;
 }
 //cout<<s<<endl;
 if(cnt%2==0)
    printf("Case %d: even\n",cs);
  else
    printf("Case %d: odd\n",cs);
  return 0;
}

int main()
{
 string s;
 int t,n,len,cnt,cs=1;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%d",&n);
  check(n,cs);
  ++cs;
  }
  return 0;
}
