#include<bits/stdc++.h>
using namespace std;
int a[105];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m,temp;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>temp;
        ++a[temp];
    }
    sort(a,a+101,greater<int>());
    if(n > m)
    {
        cout<<0;
        return 0;
    }
    int cnt,ans = m/n;
    while(ans > 0)
    {
        cnt = 0;
        for(int i=0;i<101 and a[i] > 0;i++)
        {
            cnt += a[i]/ans;
            if(cnt >= n)
            {
                cout<<ans;
                return 0;
            }
        }
        --ans;
    }
    cout<<ans;
    return 0;
}


















