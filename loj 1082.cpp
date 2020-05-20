#include<bits/stdc++.h>
using namespace std;

#define ll         long long int
#define ull        unsigned long long int
#define fastio     ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define sf(a)      scanf("%d",&a)
#define sfl(a)     scanf("%lld",&a)
#define sfd(a)     scanf("%lf",&a)
#define sfs(a)     scanf("%s",a)
#define sfc(a)     scanf("%c",&a)
#define p(a)       printf(a)
#define pf(a)      printf("%d",a)
#define pfl(a)     printf("%lld",a)
#define pfd(a)     printf("%lf",a)
#define pfc(a)     printf("%c",a)
#define pfs(a)     printf("%s",s)
#define ci(a)      cin>>a
#define co(a)      cout<<a
#define pb(a)      push_back(a)
#define newline    printf("\n")
#define ret        return 0
#define pi         acos(-1.0)
#define mod        1000000007

#define loopi(n) for(int i=0;i<n;i++)
#define loopd(n) for(int i=n-1;i>=0;i--)
int mn;

int init(int node,int left,int right,int a[],int tree[])
{
    if(left > right)return 1000000000;
    else if(left == right)return tree[node] = a[right];
    int mid = (left+right)>>1;
    int l = node<<1;
    int r = (node<<1) + 1;
    init(l,left,mid,a,tree);
    init(r,mid+1,right,a,tree);
    tree[node] = min(tree[l],tree[r]);
}

int query(int node,int left,int right,int i,int j,int a[],int tree[])
{
    if(left > j or right < i or left > right)return 100000000;
    else if(left >= i and right <= j)return tree[node];
    int mid = (left+right)>>1;
    int l = node<<1;
    int r = (node<<1) + 1;
    return min(query(l,left,mid,i,j,a,tree),query(r,mid+1,right,i,j,a,tree));
}

int main()
{
    int t;
    sf(t);
    loopi(t)
    {
        int n,q,x,y;
        sf(n),sf(q);
        int a[n+5],tree[3*n+15];
        loopi(n)sf(a[i+1]);
        init(1,1,n,a,tree);
        printf("Case %d:\n",i+1);
        while(q--)
        {
            sf(x),sf(y);
            pf(query(1,1,n,x,y,a,tree));
            newline;
        }
    }
    ret;
}













