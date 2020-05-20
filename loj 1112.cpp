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

int init(int node,int left,int right,int a[],int tree[])
{
    if(left > right) return 0;
    else if(left == right) return tree[node] = a[right];
    int mid = (left+right)>>1;
    int l = node<<1;
    int r = (node<<1)+1;
    init(l,left,mid,a,tree);
    init(r,mid+1,right,a,tree);
    tree[node] = tree[l] + tree[r];
}

int update1(int node,int left,int right,int i,int v,int a[],int tree[])
{
    if(left > i or right < i or left > right) return 0;
    if(left == right)return tree[node] = 0;
    int mid = (left+right)>>1;
    int l = node<<1;
    int r = (node<<1)+1;
    update1(l,left,mid,i,v,a,tree);
    update1(r,mid+1,right,i,v,a,tree);
    tree[node] = tree[l] + tree[r];
}

int update2(int node,int left,int right,int i,int v,int a[],int tree[])
{
    if(left > i or right < i or left > right) return 0;
    if(left == right)return tree[node] += v;
    int mid = (left+right)>>1;
    int l = node<<1;
    int r = (node<<1)+1;
    update2(l,left,mid,i,v,a,tree);
    update2(r,mid+1,right,i,v,a,tree);
    tree[node] = tree[l] + tree[r];
}

int query(int node,int left,int right,int i,int j,int a[],int tree[])
{
    if(left > j or right < i or left > right) return 0;
    if(left >= i and right <= j) return tree[node];
    int mid = (left+right)>>1;
    int l = node<<1;
    int r = (node<<1)+1;
    int p1 = query(l,left,mid,i,j,a,tree);
    int p2 = query(r,mid+1,right,i,j,a,tree);
    return p1 + p2;
}

int main()
{
    int t;
    sf(t);
    loopi(t)
    {
        int n,q,f,x,y,v;
        sf(n),sf(q);
        int a[n+5],tree[3*n+15];
        for(int j=1;j<=n;j++)sf(a[j]);
        init(1,1,n,a,tree);
        printf("Case %d:\n",i+1);
        while(q--)
        {
            sf(f);
            if(f == 1)
            {
                sf(x);
                ++x;
                pf(query(1,1,n,x,x,a,tree));
                update1(1,1,n,x,0,a,tree);
                newline;
            }
            else if(f == 2)
            {
                sf(x),sf(v);
                update2(1,1,n,++x,v,a,tree);
            }
            else
            {
                sf(x),sf(y);
                pf(query(1,1,n,++x,++y,a,tree));
                newline;
            }
        }

    }

    ret;
}
















