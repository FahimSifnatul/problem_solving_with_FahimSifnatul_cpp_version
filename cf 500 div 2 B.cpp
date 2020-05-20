#include<bits/stdc++.h>
using namespace std;
bool ok[100005],check;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,x;
    cin>>n>>x;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(ok[a[i]] == true)
            check = true;
        ok[a[i]] = true;
    }
    if(check == true)
    {
        cout<<0;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        b[i] = (a[i]&x);
        if(ok[b[i]] == true and b[i] != a[i])
            check = true;
    }
    if(check)
    {
        cout<<1;
        return 0;
    }
    sort(b,b+n);
    for(int i=1;i<n;i++)
    {
        if(b[i] == b[i-1])
        {
            cout<<2;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}






