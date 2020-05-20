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
struct val
{
    int lazy=0,on=0;
}tree[300000];

int update(int node,int left,int right,int i,int j)
{
    int mid = (left + right) >> 1;
    int l = node << 1;
    int r = l + 1;
    if(tree[node].lazy)
    {
       tree[node].on = (right-left+1) - tree[node].on;
       if(left < right)
       {
          tree[l].lazy ^= 1;
          tree[r].lazy ^= 1;
       }
       tree[node].lazy ^= 1;
    }
    if(left > j or right < i) return 0;
    if(left >= i and right <= j)
    {
        if(left < right)
        {
            tree[l].lazy ^= 1;
            tree[r].lazy ^= 1;
        }
        tree[node].on = (right-left+1) - tree[node].on;
        return 0;
    }
    update(l,left,mid,i,j);
    update(r,mid+1,right,i,j);
    tree[node].on = tree[l].on + tree[r].on;
}

int query(int node,int left,int right,int i,int j)
{
    int mid = (left + right) >> 1;
    int l = node << 1;
    int r = l + 1;
    if(tree[node].lazy)
    {
       tree[node].on = (right-left+1) - tree[node].on;
       if(left < right)
       {
          tree[l].lazy ^= 1;
          tree[r].lazy ^= 1;
       }
       tree[node].lazy ^= 1;
    }
    return left > j or right < i ? 0 : (left >= i and right <= j ? tree[node].on : query(l,left,mid,i,j) + query(r,mid+1,right,i,j));
}

int main()
{
    int n,m,q,i,j;
    sf(n),sf(m);
    --n;
    while(m--)
    {
        sf(q),sf(i),sf(j);
        --i,--j;
        q ? (pf(query(1,0,n,i,j)),newline) : update(1,0,n,i,j);
    }
    newline;
    ret;
}






