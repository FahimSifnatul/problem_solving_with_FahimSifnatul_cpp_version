/*bismillahir rahmanir rahim*/
#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;

int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101};
vector<int>cnt;

int main()
{
 int n;
 while(scanf("%d",&n) and n!=0)
 {
  int i=0;
  while(prime[i]<=n)
  {
      int flg=0,temp=prime[i],cs=2;
      while(n/temp>0)
      {
          flg+=n/temp;
          temp=pow((double)prime[i],cs);
          //cout<<temp<<" ";
          ++cs;
      }
      cnt.push_back(flg);
      ++i;
  }
  printf("%3d! =",n);
  i=0;
  for(i=0;prime[i]<=n;i++)
  {
      int temp=cnt[i];
      printf("%3d",temp);
      if(i==14 and n>52)
        printf("\n%6c",' ');
  }
    printf("\n");
  cnt.clear();
 }
 return 0;
}
