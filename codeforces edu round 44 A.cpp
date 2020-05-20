#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,o = 0,e = 0;
    cin >> n;
    int half = n/2+1;
    int a[n/2+1];
    for(int i=1; i<=n/2; i++) cin >> a[i];
    sort(a+1,a+half);
    for(int i=1,j=1; i<=n/2; i++,j+=2)
    {
       o += abs(a[i]-j);
    }
    for(int i=1,j=2; i<=n/2; i++,j+=2)
    {
       e += abs(a[i]-j);
    }
    o < e ? printf("%d\n",o) : printf("%d\n",e);
    return 0;
}









