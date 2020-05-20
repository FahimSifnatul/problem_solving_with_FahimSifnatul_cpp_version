#include<bits/stdc++.h>
using namespace std;
#define ll long long int

struct val
{
   ll a,b,c;
};

bool compare(val x,val y)
{
    return x.c>y.c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,m,sum=0,cnt=0;
    cin>>n>>m;
    val v[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i].a>>v[i].b;
        v[i].c = v[i].a-v[i].b;
        sum += v[i].a;
    }
    stable_sort(v,v+n,compare);
    //cout<<v[0].c<<endl;
    for(int i=0;i<n;i++)
    {
        if(sum<=m)
        {
            cout<<cnt;
            return 0;
        }
        else
        {
            sum -= v[i].a;
            sum += v[i].b;
            ++cnt;
        }
    }
    sum<=m ? cout<<cnt : cout<<-1;
    return 0;

}


















