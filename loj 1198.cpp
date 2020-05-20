#include<bits/stdc++.h>
#define print(i,ans) printf("Case %d: %d\n",i,ans)
#define scd(x) scanf("%d",&x)
#define pb(x) push_back(x)
using namespace std;
int t,n;

int main()
{
    scd(t);
    for(int i=1;i<=t;i++)
    {
       scd(n);
       int a[n],b[n];
       int temp,ans = 0;
       for(int i=0;i<n;i++)scd(a[i]);
       for(int i=0;i<n;i++)scd(b[i]);
       sort(a,a+n);
       sort(b,b+n,greater<int>());
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
               if(a[i] > b[j] and a[i] != -1 and b[j] != -1)
               {
                   ans += 2;
                   a[i] = -1;
                   b[j] = -1;
                   break;
               }
           }
       }
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
               if(a[i] == b[j] and a[i] != -1 and b[j] != -1)
               {
                   ++ans;
                   a[i] = -1;
                   b[j] = -1;
                   break;
               }
           }
       }
       print(i,ans);
    }
    return 0;
}










