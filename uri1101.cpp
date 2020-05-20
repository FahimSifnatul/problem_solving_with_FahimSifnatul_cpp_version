#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int x,y,temp;

       while(scanf("%d %d",&x,&y)==2 && x>0 && y>0)
       {
        int total=0;
       if(x>y)
       {
           temp=x;
           x=y;
           y=temp;
       }

        for(int i=x;i<=y;i++)
           {

               printf("%d ",i);
               total=total+i;

           }
           printf("Sum=%d\n",total);
       }




}

