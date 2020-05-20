#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,m,sum=0,temp;
 scanf("%d %d",&n,&m);
 sum+=n;
 while(n>=m)
 {
     sum+=n/m;
     temp=n%m;
     n/=m;
     n+=temp;
 }
 printf("%d\n",sum);
 return 0;
}
