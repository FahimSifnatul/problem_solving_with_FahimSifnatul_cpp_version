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
int n,q,Q,x,y;
struct val
{
    int lazy=0,zero=0,one=0,two=0;
}tree[300015];

int init(int node,int left,int right)
{
    if(left > right) return 0;
    if(left == right) return tree[node].zero = 1;
    int mid = (left+right) >> 1;
    return tree[node].zero = init(node<<1,left,mid) + init((node<<1)+1,mid+1,right);
}

int update(int node,int left,int right,int i,int j)
{
    if(left > right) return 0;
    if(tree[node].lazy)
    {
        tree[node].lazy %= 3;
        for(int i=0;i<tree[node].lazy;i++)
        {
            swap(tree[node].one,tree[node].two);
            swap(tree[node].zero,tree[node].one);
        }
        if(left < right)
        {
            tree[node<<1].lazy += tree[node].lazy;
            tree[(node<<1)+1].lazy += tree[node].lazy;
        }
        tree[node].lazy = 0;
    }
    if(left > j or right < i)return 0;
    if(left >= i and right <= j)
    {
        swap(tree[node].one,tree[node].two);
        swap(tree[node].zero,tree[node].one);
        if(left < right)
        {
            tree[node<<1].lazy += 1;
            tree[(node<<1)+1].lazy += 1;
        }
        return 0;
    }
    int mid = (left+right)>>1;
    int l = node << 1;
    int r = (node<<1) + 1;
    update(l,left,mid,i,j);
    update(r,mid+1,right,i,j);
    tree[node].zero = tree[l].zero + tree[r].zero;
    tree[node].one = tree[l].one + tree[r].one;
    tree[node].two = tree[l].two + tree[r].two;
}

int query(int node,int left,int right,int i,int j)
{
    if(left > right or left > j or right < i) return 0;
    if(tree[node].lazy)
    {
        tree[node].lazy %= 3;
        for(int i=0;i<tree[node].lazy;i++)
        {
            swap(tree[node].one,tree[node].two);
            swap(tree[node].zero,tree[node].one);
        }
        if(left < right)
        {
            tree[node<<1].lazy += tree[node].lazy;
            tree[(node<<1)+1].lazy += tree[node].lazy;
        }
        tree[node].lazy = 0;
    }
    if(left >= i and right <= j)
    {
        return tree[node].zero;
    }
    int mid = (left+right)>>1;
    return query(node<<1,left,mid,i,j) + query((node<<1)+1,mid+1,right,i,j);
}

int main()
{
    printf("Case %d:\n",i);
    sf(n),sf(q);
    --n;
    init(1,0,n);
    while(q--)
    {
        sf(Q),sf(x),sf(y);
        if(!Q) update(1,0,n,x,y);
        else pf(query(1,0,n,x,y)),newline;
    }
    ret;
}







