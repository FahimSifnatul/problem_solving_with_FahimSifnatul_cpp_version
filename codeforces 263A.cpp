#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a[5][5],i,j,posi,posj;
 for(i=0;i<5;i++)
 {
     for(j=0;j<5;j++)
     {
         scanf("%d",&a[i][j]);
         if(a[i][j]==1)
         {
             posi=3-i-1;
             if(posi<0)
                posi*=-1;
             posj=3-j-1;
             if(posj<0)
                posj*=-1;
         }
     }
 }
 printf("%d",posi+posj);
 return 0;
}
