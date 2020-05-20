#include<bits/stdc++.h>
using namespace std;

#define ll         long long int
#define ull        unsigned long long int
#define fastio     ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define sf(a)      scanf("%d",&a)
#define sfl(a)     scanf("%lld",&a)
#define sfd(a)     scanf("%lf",&a)
#define sfs(a)     scanf("%s",a)
#define sfc(a)     scanf("%c ",&a)
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
int q,n,x,y,lazy[300005];
char s[100005],c;

int update(int node,int left,int right,int i,int j)
{
    if(left > j or right < i)return 0;
    if(left >= i and right <= j)
    {
        ++lazy[node];
        return 0;
    }
    int mid = (left+right)>>1, l = node<<1, r = (node<<1)+1;
    update(l,left,mid,i,j);
    update(r,mid+1,right,i,j);
}

int query(int node,int left,int right,int i)
{
    int mid = (left+right)>>1, l = node<<1, r = (node<<1)+1;
    if(lazy[node])
    {
        if(left < right)
        {
            lazy[l] += lazy[node];
            lazy[r] += lazy[node];
            lazy[node] = 0;
        }
    }
    if(left > i or right < i)return -1;
    if(left == right)
    {
        lazy[node] %= 2;
        if(lazy[node])
        {
            if(s[left] == '1') s[left] = '0';
            else s[left] = '1';
        }
        lazy[node] = 0;
        return s[left] == '1' ? 1 : 0;
    }
    return max(query(l,left,mid,i), query(r,mid+1,right,i));
}

int main()
{
    int t;
    sf(t);
    for(int i=1;i<=t;i++)
    {
        scanf(" %s %d",s,&q);
        n = strlen(s) - 1;
        printf("Case %d:\n",i);
        memset(lazy,0,sizeof lazy);
        while(q--)
        {
           scanf(" %c %d",&c,&x);
           c == 'I' ? (sf(y),update(1,0,n,--x,--y)) : (pf(query(1,0,n,--x)),newline);
        }
    }
    ret;
}













