#include<iostream>
#include<cstdio>
float a[999999];
using namespace std;

int main()
{
    float media=0,count=1;

       for(int i=0;count<=2;i++)
       {

          scanf("%f",&a[i]);
          if(a[i]>=0 && a[i]<=10)
          {
              media=media+a[i];
              ++count;
          }
          else
          {
             printf("nota invalida\n");

          }
       }
       printf("media = %.2f",media/2);



       return 0;


}







