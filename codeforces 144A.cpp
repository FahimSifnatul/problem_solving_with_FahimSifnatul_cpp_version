#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  scanf("%d",&n);
  int a[n],cnt=0,flg,b[n],small,big;
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
      b[i]=a[i];
  }
  sort(b,b+n,greater<int>());
  for(int i=0;i<n;i++)
  {
     if(b[0]==a[i])
     {
      big=i+1;
      break;
     }

  }
  for(int i=n-1;i>=0;i--)
  {
     if(b[n-1]==a[i])
     {
      small=i+1;
      break;
     }

  }
  cnt+=n-small+big-1;
  if(small<big)
    cnt-=1;
  cout<<cnt<<endl;
  return 0;
}
