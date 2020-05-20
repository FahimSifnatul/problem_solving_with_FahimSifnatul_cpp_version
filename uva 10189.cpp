//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
int dx[]={-1,0,1,-1,1,-1,0,1};
int dy[]={1,1,1,0,0,-1,-1,-1};

int main()
{
 int n,m,cs=0;
 while(scanf("%d%d",&n,&m)==2)
 {
     if(n==0 and m==0)break;
     char c[n][m];
     int a[n][m];
     memset(a,0,sizeof a);
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
           scanf(" %c",&c[i][j]);
           if(c[i][j]=='*')
           {
            for(int k=0;k<8;k++)
            {
               if(i+dx[k]>=0 and i+dx[k]<=n-1 and j+dy[k]>=0 and j+dy[k]<=m-1)
                ++a[i+dx[k]][j+dy[k]];
            }
           }
         }
     }
     if(cs>0)printf("\n");
     printf("Field #%d:\n",++cs);
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
             if(c[i][j]=='*')printf("*");
             else printf("%d",a[i][j]);
         }
         printf("\n");
     }
 }
 return 0;
}
