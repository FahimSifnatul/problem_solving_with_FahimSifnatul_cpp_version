#include<bits/stdc++.h>
using namespace std;

int main()
{
 long long int n,rem,cnt=0;
 scanf("%I64d",&n);
 while(n>0)
 {
   rem=n%10;
   n/=10;
   if(rem==4 or rem==7)
    ++cnt;
 }
 if(cnt==4 or cnt==7)
    printf("YES");
 else
    printf("NO");
 return 0;
}
