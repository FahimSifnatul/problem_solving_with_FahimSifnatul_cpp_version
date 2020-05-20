#include<bits/stdc++.h>
using namespace std;
bool b[101];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>m>>n;
    int l,r,cnt=n;
    for(int i=0;i<m;i++)
    {
        cin>>l>>r;
        for(int j=l;j<=r;j++)
        {
            if(b[j] == false)
            {
                --cnt;
                b[j] = true;
            }
        }
    }
    cout<<cnt<<endl;
    for(int i=1;i<=n;i++)
        if(b[i] == false)
           cout<<i<<' ';
    return 0;

}

















