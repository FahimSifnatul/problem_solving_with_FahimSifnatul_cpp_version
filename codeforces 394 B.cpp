//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
bool flg;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,l;
    cin>>n>>l;
    int a[n],b[n];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    for(int i=0;i<n;i++)
    {
        if(a[i] == b[i] and flg == false) flg = true;
        else if(flg == true and a[i] != b[i])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
