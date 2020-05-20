#include<bits/stdc++.h>
using namespace std;
int check(int x,int len);

int main()
{
 int n,x;
 while(scanf("%d",&n)==1 and n!=0)
 {
     x=1;
     check(x,n);
 }
 return 0;
}


int check(int x,int len)
{
 int flg=0,negcnt=0,j=1;
  int a[len],b[len];
 memset(a,0,sizeof a);
 memset(b,0,sizeof b);
 a[0]=-1;
 b[0]=1;
     for(int i=0;i<len;i++)
     {
      if(a[i]==0 and flg<x-1)
      {
          ++flg;
      }
      else if(a[i]==0 and flg==x-1)
      {
         a[i]=-1;
         b[j]=i+1;
         ++j;
         flg=0;
      }
      else if(a[i]!=0)
        ++negcnt;
      if(negcnt==len)
      {
        if(b[j-1]==13)
        {
            printf("%d\n",x);
            return 0;
        }
        else
        {
            ++x;
            return check(x,len);
        }
      }
      if(i==len-1)
      {
         negcnt=0;
         i=-1;
      }
     }
    //cout<<a[i]<<endl;
 }
















