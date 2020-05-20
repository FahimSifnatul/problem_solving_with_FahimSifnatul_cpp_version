#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int a[101],h,g[n],cnt=0;
    memset(a,0,sizeof a);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&h,&g[i]);
        ++a[h];
    }
    for(int i=0;i<n;i++)
    {
      cnt+=a[g[i]];
    }
    cout<<cnt<<endl;
    return 0;
}
