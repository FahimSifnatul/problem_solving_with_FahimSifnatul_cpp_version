#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n;
 scanf("%d",&n);
 int x,y,z,X=0,Y=0,Z=0;
 for(int i=0;i<n;i++)
 {
  scanf("%d%d%d",&x,&y,&z);
  X+=x;
  Y+=y;
  Z+=z;
 }
 if(X==0 and Y==0 and Z==0)
    cout<<"YES";
 else
    cout<<"NO";
 return 0;
}
