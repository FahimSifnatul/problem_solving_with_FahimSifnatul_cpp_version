#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int a[n],ans=1,cnt=1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n-1;j++)
    {
       if(a[j+1] <= 2*a[j])
       {
           ++cnt;
       }
       else ans = max(ans,cnt),cnt = 1;
    }
    ans = max(ans,cnt);
    cout<<ans;
    return 0;
}







