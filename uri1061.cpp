#include<iostream>
using namespace std;
int main()
{
  int d1,d2,h1,m1,s1,h2,m2,s2;
  cout<<"Dia ";
  cin>>d1;
  cin>>h1;
  cout<<" : ";
  cin>>m1;
  cout<<" : ";
  cin>>s1;

  cout<<"Dia ";
  cin>>d2;
  cin>>h2;
  cout<<" : ";
  cin>>m2;
  cout<<" : ";
  cin>>s2;

  if(d1!=d2)
  {
    int dif=(d2*86400+h2*3600+m2*60+s2)-(d1*86400+h1*3600+m1*60+s1);
    int d=dif/86400;
    cout<<d<<" dia(s)\n";
    int h=(dif-d*86400)/3600;
    cout<<h<<" hora(s)\n";
    int m=(dif-d*86400-h*3600)/60;
    cout<<m<<" minuto(s)\n";
    int s=(dif-d*86400-h*3600-m*60);
    cout<<s<<" segundo(s)\n";

  }
  else if(d1==d2)
  {
      int dif=(h2*3600+m2*60+s2)-(h1*3600+m1*60+s1);
      int h=dif/3600;
      cout<<"0 dia(s)\n"<<h<<" hora(s)\n";
      int m=(dif-h*3600)/60;
      cout<<m<<" minuto(s)\n";
      int s=dif-h*3600-m*60;
      cout<<s<<" segundo(s)\n";


  }


}
