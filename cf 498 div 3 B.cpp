#include<bits/stdc++.h>
using namespace std;
int n,k,a[2005],b[2005];
bool ok[2005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i] = a[i];
    }
    sort(b,b+n,greater<int>());
    int ma = 0;
    for(int i=0;i<k;i++)
    {
        ma += b[i];
        for(int j=0;j<n;j++)
        {
           if(b[i] == a[j] and ok[j] == false)
           {
               ok[j] = true;
               break;
           }
        }
    }
    cout<<ma<<endl;
    for(int i=0,l=0,index=0;;i++)
    {
        if(ok[i] == true)
        {
            ++l;
            if(l == k)
            {
                cout<<n-index;
                break;
            }
            else
                cout<<i-index+1<<' ',index = i+1;
        }
    }
    return 0;
}

















