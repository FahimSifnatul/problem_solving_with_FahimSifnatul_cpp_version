#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int x,y;

       while(scanf("%d %d",&x,&y)==2 && x!=0 && y!=0)
       {

       if(x>0 && y>0)
       {
          printf("primeiro\n");

       }
       else if(x>0 && y<0)
       {
          printf("quarto\n");

       }
       else if(x<0 && y<0)
       {
          printf("terceiro\n");

       }
       else if(x<0 && y>0)
       {
          printf("segundo\n");

       }


       }



}




