/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;

double ab,ac,bc,r,s,ABC,ad,ae,de,tr,R,ade,high,low,step;

double binary_search_bisection_method()
{
 tr=ABC-ade;
 R=ade/tr;
 if(abs(R-r)>0.00000001)
 {
  if(R>r)
  {
     high=ad;
     ad=(high+low)/2.0;
     ae=(ac*ad)/ab;
     de=(bc*ad)/ab;
     ade=(ad+ae+de)/2.0;
     ade=ade*(ade-ad)*(ade-ae)*(ade-de);
     ade=sqrt(ade);
     return binary_search_bisection_method();
  }
  else if(R<r)
  {
     low=ad;
     ad=(high+low)/2.0;
     ae=(ac*ad)/ab;
     de=(bc*ad)/ab;
     ade=(ad+ae+de)/2.0;
     ade=ade*(ade-ad)*(ade-ae)*(ade-de);
     ade=sqrt(ade);
     return binary_search_bisection_method();
  }
 }
 else
  return ad;
}

int main()
{
 int t,cs=1;
 scanf("%d",&t);
 while(t--)
 {
     scanf("%lf%lf%lf%lf",&ab,&ac,&bc,&r);
     s=(ab+ac+bc)/2.0;
     s=s*(s-ab)*(s-ac)*(s-bc);
     ABC=sqrt(s);
     ad=ab/2.0;
     ae=(ac*ad)/ab;
     de=(bc*ad)/ab;
     ade=(ad+ae+de)/2.0;
     ade=ade*(ade-ad)*(ade-ae)*(ade-de);
     ade=sqrt(ade);
     high=ab;
     step=0.0;
     low=0.0;
     cout<<"Case "<<cs<<": "<<fixed<<setprecision(10)<<binary_search_bisection_method()<<endl;
     ++cs;
 }
 return 0;
}
