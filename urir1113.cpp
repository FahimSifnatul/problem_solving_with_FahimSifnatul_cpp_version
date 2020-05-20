#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int x,y;

       while(scanf("%d %d",&x,&y)==2 && x!=y)
       {

       if(x>y)
       {
          printf("Decrescente\n");
       }
       else if(x<y)
       {
          printf("Crescente\n");
       }

       }



}


