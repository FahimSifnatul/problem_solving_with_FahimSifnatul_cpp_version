#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int

#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)

#define sf(a) scanf("%d",&a)
#define sfl(a) scanf("%lld",&a)
#define sfd(a) scanf("%lf",&a)
#define sfs(a) scanf("%s",a)
#define pf(a) printf("%d",a)
#define pfl(a) printf("%lld",a)
#define pfd(a) printf("%lf",a)
#define pfc(a) printf("%c",a)
#define pfs(a) printf("%s",s)
#define ci(a) cin>>a
#define co(a) cout<<a
#define pb(a) push_back(a)
#define newline printf("\n")

#define loopi(n) for(int i=0;i<n;i++)
#define loopd(n) for(int i=n-1;i>=0;i--)
int n,m;
int price[105];
vector<string>v;
map<string,int>mp;

bool cmp(string a,string b)
{
    return mp[a] >= mp[b];
}


int main()
{
    sf(n),sf(m);
    loopi(n)sf(price[i]);
    loopi(m)
    {
        string temp;
        ci(temp);
        ++mp[temp];
        if(mp[temp] == 1)v.pb(temp);
    }
    sort(v.begin(),v.end(),cmp);
    sort(price,price+n);
    int mi = 0;
    for(int i=0;i<v.size() and i<m;i++)
    {
        mi += mp[v[i]]*price[i];
    }
    sort(price,price+n,greater<int>());
    int ma = 0;
    for(int i=0;i<v.size() and i<m;i++)
    {
        ma += mp[v[i]]*price[i];
    }
    co(mi);
    co(' ');
    co(ma);
    newline;
    return 0;
}

















