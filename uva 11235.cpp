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
#define add        100005

#define loopi(n) for(int i=0;i<n;i++)
#define loopd(n) for(int i=n-1;i>=0;i--)
int tree[3*add],freq[2*add],a[add];
int n,q,x,y;

int init(int node,int left,int right)
{
    if(left > right)return 0;
    if(left == right)return tree[node] = freq[a[left]+100000];
    int mid = (left + right) >> 1;
    int l = node << 1;
    int r = (node << 1) + 1;
    init(l,left,mid);
    init(r,mid+1,right);
    tree[node] = max(tree[l],tree[r]);
}

int query(int node,int left,int right,int i,int j)
{
    if(left > j or right < i)return 0;
    if(left >= i and right <= j)return tree[node];
    int mid = (left + right) >> 1;
    int l = node << 1;
    int r = (node << 1) + 1;

}

int main()
{
    while(sf(n) and n != 0)
    {
        sf(q);
        memset(freq,0,sizeof freq);
        for(int i=1;i<=n;i++)
        {
            sf(a[i]);
            ++freq[a[i]+100000];
        }
        init(1,1,n);
        while(q--)
        {
            sf(x),sf(y);
            printf("%d\n",query(1,1,n,x,y));
        }
    }
    ret;
}











