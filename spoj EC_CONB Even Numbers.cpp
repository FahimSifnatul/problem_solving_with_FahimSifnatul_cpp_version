#include<bits/stdc++.h>
using namespace std;

unsigned long num_rev(unsigned long n)
{
    bitset<25>b(n);
    int en;
    for(int i=24;i>=0;i--)
    {
       if(b.test(i) == 1)
        {
            en = i;
            break;
        }
    }
    //cout<<en<<endl;
    for(int i=0,j=en;i<j;i++,j--)
    {
       int p = b.test(i);
       int e = b.test(j);
       b.set(i,e);
       b.set(j,p);
    }
    return b.to_ulong();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    unsigned long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2 == 0) cout<<num_rev(a[i])<<endl;
        else cout<<a[i]<<endl;
    }
}
