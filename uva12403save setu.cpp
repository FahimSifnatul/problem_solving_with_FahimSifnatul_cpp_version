#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{

  char s[100],s1[]="report";
  long long int t,i,j,a[10],k,count=0,l;
  scanf("%lld",&t);
  while(t--)
  {
      j=-1;
      scanf(" %[^\n]",s);
      if(strcmp(s,s1)!=0)
      {
         for(i=0;i<strlen(s);i++)
         {
             if(s[i]>='0' and s[i]<='9')
             {
                 ++j;
                 a[j]=(long long int)s[i]-'0';
                 //cout<<j<<endl;
                 //cout<<a[j]<<endl;
             }
         }
         l=j;
         for(i=0;i<=j;i++)
         {
             for(k=l;k>0;k--)
             {
                a[i]*=10;
             }

             count+=a[i];
             //cout<<count<<endl;
             --l;
         }

         //cout<<count<<endl;
      }
      else if(strcmp(s,s1)==0)
        printf("%lld\n",count);
  }
  return 0;


}
