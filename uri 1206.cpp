#include<bits/stdc++.h>
using namespace std;
int pawn(int a[9][9],int x,int y);
int rook(int a[9][9],int x,int y);
int bishop(int a[9][9],int x,int y);
int queen(int a[9][9],int x,int y);
int king(int a[9][9],int x,int y);
int check(int a[9][9]);

int main()
{
 int a[9][9],n,len,x,y;
 char c,s[100];
 while(!cin.eof() and cin>>n)
 {
   memset(a,0,sizeof a);
   scanf(" %[^\n]",s);
  //cout<<s<<endl;
   len=strlen(s);

   for(int i=1;i<len;i+=4)
   {
    //scanf(" %c",&c);
    x=(int)s[i+1]-'0';
    y=(int)s[i]-'a'+1;
    a[x][y]=65;
     //cout<<x<<y<<" "<<endl;
   }

   for(int i=0;i<len;i+=4)
   {
    //scanf(" %c",&c);
    y=(int)s[i+1]-'a'+1;
    x=(int)s[i+2]-'0';
   if(s[i]=='P')
     pawn(a,x,y);
   else if(s[i]=='T')
     rook(a,x,y);
   else if(s[i]=='B')
     bishop(a,x,y);
   else if(s[i]=='R')
     queen(a,x,y);
   else if(s[i]=='W')
     king(a,x,y);
     //cout<<x<<y<<" "<<endl;
   }
   //scanf(" %c",&c);
   cin>>c;
   check(a);
 }
 return 0;
}


int pawn(int a[9][9],int x,int y)
{
// int x,y;
 //char Y;
 //scanf(" %c %d",&Y,&x);
 //cin>>Y>>x;
// y=(int)Y-'a'+1;
 if(x-1>0)
 {
     if(a[x-1][y-1]>0 and y-1>0)
        --a[x-1][y-1];
     else if(y-1>0)
        a[x-1][y-1]=-1;
     if(a[x-1][y+1]>0 and y+1<9)
     --a[x-1][y+1];
     else if(y+1<9)
        a[x-1][y+1]=-1;
 }
 return 0;
}

int rook(int a[9][9],int x,int y)
{
 //int x,y;
// char Y;
 //scanf(" %c %d",&Y,&x);
// cin>>Y>>x;
// y=(int)Y-'a'+1;
 for(int i=1;i<9;i++)
 {
     if(a[x][i]>0 and i!=y)
     {
         --a[x][i];
         break;
     }
     else if(i!=y)
        a[x][i]=-1;
 }
 for(int i=1;i<9;i++)
 {
     if(a[i][y]>0 and i!=x)
     {
         --a[i][y];
         break;
     }
     else if(i!=x)
        a[i][y]=-1;
 }
return 0;
}


int bishop(int a[9][9],int x,int y)
{
 //int x,y,i,j,temp;
// char Y;
 //scanf(" %c %d",&Y,&x);
 //cin>>Y>>x;
// y=(int)Y-'a'+1;
int temp,i,j;
 temp=y;
 for(i=x+1;i<9;i++)
 {
  for(j=y+1;j<9;j++)
  {
    if(a[i][j]>0)
    {
       --a[i][j];
       i+=9;
       break;
    }
    else
       a[i][j]=-1;
    y+=1;
    break;
  }
 }
 y=temp;
 for(i=x-1;i>0;i--)
 {
  for(j=y-1;j>0;j--)
   {
    if(a[i][j]>0)
    {
       --a[i][j];
       i-=9;
       break;
    }
    else
    a[i][j]=-1;
    y-=1;
    break;
   }
 }
 y=temp;
 for(i=x+1;i<9;i++)
 {
  for(j=y-1;j>0;j--)
   {
    if(a[i][j]>0)
    {
       --a[i][j];
       i+=9;
       break;
    }
    else
    a[i][j]=-1;
    y-=1;
    break;
   }
 }
 y=temp;
 for(i=x-1;i>0;i--)
 {
  for(j=y+1;j<9;j++)
   {
    if(a[i][j]>0)
    {
       --a[i][j];
       i-=9;
       break;
    }
    else
    a[i][j]=-1;
    y+=1;
    break;
   }
 }
 return 0;
}

int queen(int a[9][9],int x,int y)
{
 //int x,y,i,j,temp;
 //char Y;
 //scanf(" %c %d",&Y,&x);
 //cin>>Y>>x;
// y=(int)Y-'a'+1;
int i,j,temp;
for(int i=1;i<9;i++)
 {
     if(a[x][i]>0 and i!=y)
     {
         --a[x][i];
          break;
     }
     else if(i!=y)
        a[x][i]=-1;
 }
 for(int i=1;i<9;i++)
 {
     if(a[i][y]>0 and i!=x)
     {
         --a[i][y];
         break;
     }
     else if(i!=x)
        a[i][y]=-1;
 }
 temp=y;
 for(i=x+1;i<9;i++)
 {
  for(j=y+1;j<9;j++)
  {
    if(a[i][j]>0)
    {
       --a[i][j];
       i+=9;
       break;
    }
    else
       a[i][j]=-1;
    y+=1;
    break;
  }
 }
 y=temp;
 for(i=x-1;i>0;i--)
 {
  for(j=y-1;j>0;j--)
   {
    if(a[i][j]>0)
    {
       --a[i][j];
       i-=9;
       break;
    }
    else
    a[i][j]=-1;
    y-=1;
    break;
   }
 }
 y=temp;
 for(i=x+1;i<9;i++)
 {
  for(j=y-1;j>0;j--)
   {
    if(a[i][j]>0)
    {
       --a[i][j];
       i+=9;
       break;
    }
    else
    a[i][j]=-1;
    y-=1;
    break;
   }
 }
 y=temp;
 for(i=x-1;i>0;i--)
 {
  for(j=y+1;j<9;j++)
   {
    if(a[i][j]>0)
    {
       --a[i][j];
       i-=9;
       break;
    }
    else
    a[i][j]=-1;
    y+=1;
    break;
   }
 }
 return 0;
}

int king(int a[9][9],int x,int y)
{
// int x,y;
 //char Y;
 //scanf(" %c %d",&Y,&x);
 //cin>>Y>>x;
// y=(int)Y-'a'+1;
 if(x+1<9 and y-1>0 and a[x+1][y-1]==0)
    a[x+1][y-1]=-1;
 if(x+1<9 and a[x+1][y]==0)
    a[x+1][y]=-1;
 if(x+1<9 and y+1<9 and a[x+1][y+1]==0)
    a[x+1][y+1]=-1;
 if(y-1>0 and a[x][y-1]==0)
    a[x][y-1]=-1;
 if(y+1<9 and a[x][y+1]==0)
    a[x][y+1]=-1;
 if(x-1>0 and y-1>0 and a[x-1][y-1]==0)
    a[x-1][y-1]=-1;
 if(x-1>0 and a[x-1][y]==0)
    a[x-1][y]=-1;
 if(x-1>0 and y+1<9 and a[x-1][y+1]==0)
    a[x-1][y+1]=-1;

 if(x+1<9 and y-1>0 and a[x+1][y-1]>0)
    --a[x+1][y-1];
 if(x+1<9 and a[x+1][y]>0)
    --a[x+1][y];
 if(x+1<9 and y+1<9 and a[x+1][y+1]>0)
    --a[x+1][y+1];
 if(y-1>0 and a[x][y-1]>0)
    --a[x][y-1];
 if(y+1<9 and a[x][y+1]>0)
    --a[x][y+1];
 if(x-1>0 and y-1>0 and a[x-1][y-1]>0)
    a[x-1][y-1];
 if(x-1>0 and a[x-1][y]>0)
    --a[x-1][y];
 if(x-1>0 and y+1<9 and a[x-1][y+1]>0)
    --a[x-1][y+1];
 return 0;
}


int check(int a[9][9])
{
 int x,y;
 char Y;
 //scanf(" %c %d",&Y,&x);
 cin>>Y>>x;
 y=(int)Y-'a'+1;
 /*for(int i=8;i>0;i--)
 {
     for(int j=1;j<9;j++)
        cout<<a[i][j]<<" ";
     cout<<endl;
 }*/
 if(a[x][y]==0)
 {
  printf("NAO\n");
  return 0;
 }
 if((a[x+1][y-1]==0 or a[x+1][y-1]==65) and x+1<9 and y-1>0)
 {
  printf("NAO\n");
  return 0;
 }
 if((a[x+1][y]==0 or a[x+1][y]==65) and x+1<9)
 {
   printf("NAO\n");
   return 0;
 }
 if((a[x+1][y+1]==0 or a[x+1][y+1]==65) and x+1<9 and y+1<9)
 {
   printf("NAO\n");
   return 0;
 }
 if((a[x][y-1]==0 or a[x][y-1]==65) and y-1>0)
 {
   printf("NAO\n");
   return 0;
 }
 if((a[x][y+1]==0 or a[x][y+1]==65) and y+1<9)
 {
   printf("NAO\n");
   return 0;
 }
 if((a[x-1][y-1]==0 or a[x-1][y-1]==65) and x-1>0 and y-1>0)
 {
   printf("NAO\n");
   return 0;
 }
 if((a[x-1][y]==0 or a[x-1][y]==65)and x-1>0)
 {
   printf("NAO\n");
   return 0;
 }
 if((a[x-1][y+1]==0 or a[x-1][y+1]==65) and x-1>0 and y+1<9)
 {
   printf("NAO\n");
   return 0;
 }
 printf("SIM\n");
 return 0;
}
