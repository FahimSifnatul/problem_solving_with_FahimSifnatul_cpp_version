#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int

#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)

#define sf(a)   scanf("%d",&a)
#define sfl(a)  scanf("%lld",&a)
#define sfd(a)  scanf("%lf",&a)
#define sfs(a)  scanf("%s",a)
#define sfc(a)  scanf("%c",&a)
#define p(a)    printf(a)
#define pf(a)   printf("%d",a)
#define pfl(a)  printf("%lld",a)
#define pfd(a)  printf("%lf",a)
#define pfc(a)  printf("%c",a)
#define pfs(a)  printf("%s",s)
#define ci(a)   cin>>a
#define co(a)   cout<<a
#define pb(a)   push_back(a)
#define newline printf("\n")
#define ret return 0
#define pi acos(-1.0)

#define loopi(n) for(int i=0;i<n;i++)
#define loopd(n) for(int i=n-1;i>=0;i--)
ll n,m,p,b;
ll a[150000],tree[450000];

ll init(ll node,ll left,ll right,ll flg)
{
    if(left == right)return tree[node] = a[right];
    ll l = (node<<1);
    ll r = (node<<1)+1;
    ll mid = (left+right)>>1;
    init(l,left,mid,!flg);
    init(r,mid+1,right,!flg);
    tree[node] = (flg ? tree[l]|tree[r] : tree[l]^tree[r]);
}

ll update(ll node,ll left,ll right,ll index,ll val,ll flg)
{
    if(left > index or right < index)return 0;
    else if(left == right)return tree[node] = val;
    ll l = (node<<1);
    ll r = (node<<1)+1;
    ll mid = (left+right)>>1;
    update(l,left,mid,index,val,!flg);
    update(r,mid+1,right,index,val,!flg);
    //cout<<flg<<' '<<tree[l]<<' '<<tree[r]<<endl;
    tree[node] = (flg ? tree[l]|tree[r] : tree[l]^tree[r]);
}

int main()
{
    sfl(n),sfl(m);
    int flg = (n%2 ? 1 : 0);
    n = round(pow(2,n));
    for(int i=1;i<=n;i++)
    {
        sfl(a[i]);
    }
    init(1,1,n,flg);
    loopi(m)
    {
        sfl(p),sfl(b);
        update(1,1,n,p,b,flg);
        printf("%lld\n",tree[1]);
    }
    newline;
    ret;
}













