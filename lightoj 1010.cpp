/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int t,cs=1,m,n,r;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%d %d",&m,&n);
  if(m>n)
    swap(m,n);
  r=m*n;
  if(m==1)
    printf("Case %d: %d\n",cs,n);
  else if(m==2)
  {
    if(n%4==2 or n%4==3)
       printf("Case %d: %d\n",cs,(n/4+1)*4);
    else if(n%4==0)
       printf("Case %d: %d\n",cs,n/4*4);
    else
       printf("Case %d: %d\n",cs,(n/4+1)*4-2);
  }
  else if(r%2==0)
    printf("Case %d: %d\n",cs,r/2);
  else
    printf("Case %d: %d\n",cs,(r+1)/2);
    //cout<<m<<" "<<n<<endl;
  ++cs;
 }
 return 0;
}
