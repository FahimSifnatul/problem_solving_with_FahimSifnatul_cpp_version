#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n,yy,zz;

       yy:
         int count=1;
         double media=0,a[10];

       for(int i=0;count<=2;i++)
       {

          scanf("%lf",&a[i]);

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

       printf("media = %.2lf\nnovo calculo (1-sim 2-nao)\n",media/2);

           zz:
           cin >> n;
           if(n<1 || n>2)
           {
               cout<<"novo calculo (1-sim 2-nao)\n";
               goto zz;
           }
           else if(n==1)
           {
               goto yy;
           }



       return 0;


}








