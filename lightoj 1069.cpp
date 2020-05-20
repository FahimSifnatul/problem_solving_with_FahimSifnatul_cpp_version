#include<bits/stdc++.h>
using namespace std;

int main()
{
 int t,cs=1;
 scanf("%d",&t);
 while(t--)
 {
  int total=0,my,lift;
  scanf("%d %d",&my,&lift);
  if(my>lift)
  {
    total+=(my+my-lift)*4+19;
  }
  else
    total+=lift*4+19;
  printf("Case %d: %d\n",cs,total);
  ++cs;
 }
 return 0;
}
