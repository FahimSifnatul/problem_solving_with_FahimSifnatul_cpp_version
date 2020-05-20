#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j;
    char c;
    scanf("%d %d %c",&n,&m,&c);
    char a[n][m];
    int clr[27];
    memset(clr,-1,sizeof clr);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           scanf(" %c",&a[i][j]);
           if(a[i][j]>='A' and a[i][j]<='Z')
           clr[(int)a[i][j]-'A']=0;
        }

    }
    int cnt=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
          if(a[i][j]==c)
          {
              if(i-1>=0 and a[i-1][j]!=c and clr[(int)a[i-1][j]-'A']==0)
              {
                  clr[(int)a[i-1][j]-'A']=-1;
                  ++cnt;
              }
              if(i+1<n and a[i+1][j]!=c and clr[(int)a[i+1][j]-'A']==0)
              {
                  clr[(int)a[i+1][j]-'A']=-1;
                  ++cnt;
              }
              if(j-1>=0 and a[i][j-1]!=c and clr[(int)a[i][j-1]-'A']==0)
              {
                  clr[(int)a[i][j-1]-'A']=-1;
                  ++cnt;
              }
              if(j+1<m and a[i][j+1]!=c and clr[(int)a[i][j+1]-'A']==0)
              {
                  clr[(int)a[i][j+1]-'A']=-1;
                  ++cnt;
              }
          }
        }
    }
    printf("%d\n",cnt);
    return 0;
}

