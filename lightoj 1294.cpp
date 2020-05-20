#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long int n,m;
        cin>>n>>m;
        cout<<"Case "<<i<<": "<<(n*m)/2<<endl;
    }
    return 0;
}
