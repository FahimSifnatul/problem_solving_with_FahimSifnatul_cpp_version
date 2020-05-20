#include<bits/stdc++.h>
using namespace std;

int main()
{
 int cs=1,X,Y,a[9][9],x,y,cnt;
 char kx,ky;
 while(true)
 {
  cnt=0;
  scanf(" %c",&kx);
  memset(a,0,sizeof a);
  if(kx=='0')
    return 0;
  scanf(" %c",&ky);
  X=(int)kx-'0';
  Y=(int)ky-'a'+1;
  for(int i=0;i<8;i++)
  {
   scanf(" %c %c",&kx,&ky);
   x=(int)kx-'0';
   y=(int)ky-'a'+1;
   if(x-1>0)
   {
     if(y-1>0)
        a[x-1][y-1]=-1;
     if(y+1<9)
        a[x-1][y+1]=-1;
   }
  }
  x=X-1;
  y=Y-2;
  if(x>0 and y>0)
  {
      if(a[x][y]!=-1)
        ++cnt;
  }
  x=X+1;
  y=Y-2;
  if(x<9 and y>0)
  {
      if(a[x][y]!=-1)
        ++cnt;
  }
  x=X-2;
  y=Y-1;
  if(x>0 and y>0)
  {
      if(a[x][y]!=-1)
        ++cnt;
  }
  x=X-2;
  y=Y+1;
  if(x>0 and y<9)
  {
      if(a[x][y]!=-1)
        ++cnt;
  }
  x=X-1;
  y=Y+2;
  if(x>0 and y<9)
  {
      if(a[x][y]!=-1)
        ++cnt;
  }
  x=X+1;
  y=Y+2;
  if(x<9 and y<9)
  {
      if(a[x][y]!=-1)
        ++cnt;
  }
  x=X+2;
  y=Y-1;
  if(x<9 and y>0)
  {
      if(a[x][y]!=-1)
        ++cnt;
  }
  x=X+2;
  y=Y+1;
  if(x<9 and y<9)
  {
      if(a[x][y]!=-1)
        ++cnt;
  }
  printf("Caso de Teste #%d: %d movimento(s).\n",cs,cnt);
  ++cs;
 }
 return 0;
}
