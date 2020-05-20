#include<iostream>
#include<cmath>
long long int a[99999999];
long long int pal(long long int count,long long int p);

using namespace std;
int main()
{
   long long int count,p,t;
   cin>>t;
   while(t--)
   {
       cin>>p;
       count=1;
       pal(count,p);
   }
}

long long int pal(long long int count,long long int p)
{
  long long int digit,t,i,num=0,sum,j,real=p,gum;
  for(i=0;p>0;i++)
  {
     a[i]=p%10;
     p/=10;
  }
  digit=i;
  j=i-1;
  for(i=0;i<digit;i++)
  {
      t=j;
      while(t--)
      {
        a[i]*=10;
      }
      num+=a[i];
      --j;
  }
  sum=real+num;
  gum=sum;
  num=0;
  for(i=0;gum>0;i++)
  {
     a[i]=gum%10;
     gum/=10;
  }
  digit=i;
  j=i-1;
  for(i=0;i<digit;i++)
  {
      t=j;
      while(t--)
      {
        a[i]*=10;
      }
      num+=a[i];
      --j;
  }
  if(num==sum)
  {
      cout<<count<<" "<<num<<endl;
  }
  else
  {
      ++count;
      return pal(count,sum);

  }


}







