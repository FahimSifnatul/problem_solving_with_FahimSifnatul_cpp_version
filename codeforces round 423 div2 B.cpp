//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
int n,m,black=0;
char a[100][100];
int ur,dr,lc,rc;

int uprow()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
         if(a[i][j]=='B')
         {
             ur=i;
             return 0;
         }
        }
    }
}

int downrow()
{
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=0;j--)
        {
         if(a[i][j]=='B')
         {
             dr=i;
             return 0;
         }
        }
    }
}

int leftcol()
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
         if(a[j][i]=='B')
         {
             lc=i;
             return 0;
         }
        }
    }
}

int rightcol()
{
    for(int i=m-1;i>=0;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
         if(a[j][i]=='B')
         {
             rc=i;
             return 0;
         }
        }
    }
}

int main()
{
 cin>>n>>m;
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<m;j++)
     {
         cin>>a[i][j];
         if(a[i][j]=='B')++black;
     }
 }
 if(black==0)
 {
     cout<<1;
     return 0;
 }
 uprow();
 downrow();
 leftcol();
 rightcol();
 int ma=max(dr-ur+1,rc-lc+1);
 if(n>=ma and m>=ma)
 {
     cout<<ma*ma-black;
 }
 else cout<<-1;
 return 0;
}















