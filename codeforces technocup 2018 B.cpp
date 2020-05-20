//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;

struct val
{
    int k,f;
};

bool comp(val c, val d)
{
    return c.k < d.k ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    val a[m];
    for (int i=0;i<m;i++) cin >> a[i].k >> a[i].f;
    sort(a,a+m,comp);
    int ans = -1, cnt = 0 ;
    for(int i=0;i<n;i++)
    {

    }
    cout << ans << endl;
    return 0;
}












