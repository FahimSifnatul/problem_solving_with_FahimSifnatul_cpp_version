/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;

string s;

int digit_counting(int n)
{
 for(int i=1;i<=n;i++)
 {
  int temp=i;
  while(temp>0)
  {
   s+=(temp%10)+'0';
   temp/=10;
  }
 }
}

int main()
{
 int a[10],n,t;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%d",&n);
  memset(a,0,sizeof a);
  digit_counting(n);
  int len=s.size();
  for(int i=0;i<len;i++)
  {
      switch(s[i])
      {
      case '0':
        ++a[0];
        break;
      case '1':
        ++a[1];
        break;
      case '2':
        ++a[2];
        break;
      case '3':
        ++a[3];
        break;
      case '4':
        ++a[4];
        break;
      case '5':
        ++a[5];
        break;
      case '6':
        ++a[6];
        break;
      case '7':
        ++a[7];
        break;
      case '8':
        ++a[8];
        break;
      case '9':
        ++a[9];
        break;
      }
  }
  for(int i=0;i<=9;i++)
  {
    if(i!=9)
    printf("%d ",a[i]);
    else
    printf("%d\n",a[i]);
  }
  s="";
 }
 return 0;
}
