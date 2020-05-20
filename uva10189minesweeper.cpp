#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int n,m,count,cnt=1;
    while(scanf("%d %d",&n,&m)==2)
    {
        printf("\n");
        if(n==0 and m==0)
            break;
        int a[n][m],i,j;
        char c;
        memset(a,0,sizeof a);
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
             scanf(" %c",&c);
             if(c=='*')
             {
                 /* ...
                    .*.
                    ... */
                 a[i][j]=-100;
                if(i-1>=0 and j-1>=0)++a[i-1][j-1];
                if(i-1>=0)++a[i-1][j];
                if(i-1>=0 and j+1<=m)++a[i-1][j+1];
                if(j-1>=0)++a[i][j-1];
                if(j+1<=m)++a[i][j+1];
                if(i+1<=n and j-1>=0)++a[i+1][j-1];
                if(i+1<=n)++a[i+1][j];
                if(i+1<=n and j+1<=m)++a[i+1][j+1];
             }
            }
        }
        printf("Field #%d:\n",cnt);
        ++cnt;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
             if(a[i][j]<0)
             {
                printf("*");
             }
             else
                printf("%d",a[i][j]);
            }
            printf("\n");
        }
    }
}
