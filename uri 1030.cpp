#include<bits/stdc++.h>
using namespace std;
//int check(int x,int len);

int main()
{
 int n,x,p,m,cs=1;
 scanf("%d",&n);
 while(n--)
 {
    scanf("%d %d",&p,&m);
    int flg=0,negcnt=0,j=1;
  int a[p],b[p];
 memset(a,0,sizeof a);
 memset(b,0,sizeof b);
     for(int i=0;i<p;i++)
     {
      if(a[i]==0 and flg<m-1)
      {
          ++flg;
      }
      else if(a[i]==0 and flg==m-1)
      {
         a[i]=-1;
         b[j]=i+1;
         ++j;
         flg=0;
      }
      else if(a[i]!=0)
        ++negcnt;
      if(negcnt==p)
      {
        printf("Case %d: %d\n",cs,b[j-1]);
        break;
      }
      if(i==p-1)
      {
         negcnt=0;
         i=-1;
      }
     }
    ++cs;
 }
 return 0;
}


/*int check(int x,int len)
{

    //cout<<a[i]<<endl;
 }*/

















