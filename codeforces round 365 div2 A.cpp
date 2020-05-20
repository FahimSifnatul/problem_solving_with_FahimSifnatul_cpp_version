/*bismilllahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int m[n],c[n],M=0,C=0;
  for(int i=0;i<n;i++)
  {
      cin>>m[i]>>c[i];
      if(m[i]>c[i])
        ++M;
      else if(m[i]<c[i])
        ++C;
  }
  if(M>C)
    cout<<"Mishka\n";
  else if(M<C)
    cout<<"Chris\n";
  else
    cout<<"Friendship is magic!^^\n";
  return 0;
}
