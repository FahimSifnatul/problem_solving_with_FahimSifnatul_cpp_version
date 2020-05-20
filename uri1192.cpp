#include<bits/stdc++.h>
using namespace std;

int main()
{
 int a,b,t;
 char c;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%d%c%d",&a,&c,&b);
  if(a==b)
    printf("%d\n",a*b);
  else if(c==toupper(c))
    printf("%d\n",b-a);
  else
    printf("%d\n",b+a);
 }
 return 0;
}
