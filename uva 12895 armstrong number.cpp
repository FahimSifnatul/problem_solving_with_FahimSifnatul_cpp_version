/*bismillahir rahmanir rahim*/
#include<iostream>
#include<vector>
#include<cmath>
#include<cstdio>
using namespace std;

vector<int>arm;

int main()
{
 int t,n;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%d",&n);
  int temp,num=n;
  while(num>0)
  {
   temp=num%10;
   num/=10;
   arm.push_back(temp);
  }
  int len=arm.size();
  double sum=0;
  for(int i=0;i<len;i++)
  {
      sum+=pow((double)arm[i],len);
  }
  //cout<<sum<<'\n';
  if(sum==n)
    printf("Armstrong\n");
  else
    printf("Not Armstrong\n");
  arm.clear();
 }
 return 0;
}
