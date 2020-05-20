#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll n,m,a,temp,r,s,c;
vector<ll>b,p;

ll fractional_knapsack(int i,int j)
{
    if(i == n)return 0;
    //int j = lower_bound(p.begin(),p.end(),b[i]) - p.begin();
    if(b[i] >= p[j])
    {
        ++r;
        s += p[j];
        ++j;
    }
    else if(b[i] + a >= p[j])
    {
        ++r;
        a -= (p[j]-b[i]);
        s += b[i];
        ++j;
    }
    if(a < 0) a = 0;
    fractional_knapsack(++i,j);
}

void printing()
{
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<b[i]<<' ';
    cout<<endl;
    for(int i=0;i<m;i++)
        cout<<p[i]<<' ';
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m>>a;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        b.push_back(temp);
    }
    for(int i=0;i<m;i++)
    {
        cin>>temp;
        p.push_back(temp);
    }
    sort(b.begin(),b.end(),greater<ll>());
    sort(p.begin(),p.end());
    //printing();
    c = a;
    fractional_knapsack(0,0);
    if(a >= 0) s -= a;
    if(s < 0) s = 0;
    cout<<r<<' '<<s<<endl;
    return 0;
}








