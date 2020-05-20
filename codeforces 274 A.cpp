#include<bits/stdc++.h>
using namespace std;

int main()
{
 int a,b,c;
 scanf("%d%d%d",&a,&b,&c);
 int ma;
 ma=a*b*c;
 ma=max(ma,a*(b+c));
 ma=max(ma,a+b*c);
 ma=max(ma,(a+b)*c);
 ma=max(ma,a*b+c);
 ma=max(ma,a+b+c);
 cout<<ma;
 return 0;
}
