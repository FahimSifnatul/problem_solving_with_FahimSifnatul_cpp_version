//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
int n,flg,temp;
map<int,bool>mp;

int main()
{
 scanf("%d",&n);
 flg=n;
 while(n--)
 {
     scanf("%d",&temp);
     mp[temp]=true;
     if(temp==flg)
     {
      while(mp[flg]==true)
      {
        printf("%d ",flg);
          --flg;
      }
      cout<<'\n';
     }
     else cout<<'\n';
 }
}
