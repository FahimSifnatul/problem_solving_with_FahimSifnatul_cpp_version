#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
   int n,amount,total=0,c=0,r=0,s=0;
   char a;
   cin>>n;
   for(int i=1;i<=n;i++)
   {

       cin>> amount >> a;
       total=total+amount;
       switch(a)
       {
        case 'C':
        c=c+amount;
        break;
        case 'R':
        r=r+amount;
        break;
        case 'S':
        s=s+amount;
        break;


       }

   }

   cout<<"Total: "<<total<<" cobaias\n";
   cout<<"Total de coelhos: " << c << "\n";
   cout<<"Total de ratos: " << r << "\n";
   cout<<"Total de sapos: " << s << "\n";
   cout<<"Percentual de coelhos: " << fixed << setprecision(2) << static_cast<float>((c*100.00)/total) << " %\n";
   cout<<"Percentual de ratos: " << fixed << setprecision(2) << static_cast<float>((r*100.00)/total) << " %\n";
   cout<<"Percentual de sapos: " << fixed << setprecision(2) << static_cast<float>((s*100.00)/total) << " %\n";

}

