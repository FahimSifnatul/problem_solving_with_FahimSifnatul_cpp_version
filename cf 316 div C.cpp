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
#define ret     return 0
#define pi      acos(-1.0)

#define loopi(n) for(int i=0;i<n;i++)
#define loopd(n) for(int i=n-1;i>=0;i--)
int n,q;
string s;
struct val
{
    int p;
    char c;
}tree[900015];

int init(int node,int left,int right)
{
    if(left == right)
    {
        tree[node].c = s[right];
        return tree[node].p = 0;
    }
    int mid = (left+right)>>1;
    int l = node<<1;
    int r = (node<<1)+1;
    init(l,left,mid);
    init(r,mid+1,right);
    if(tree[l].c == tree[r].c and tree[r].c == '.')
    {
        tree[node].c = '.';
        tree[node].p = max(tree[l].p,tree[r].p)+1;
    }
    else
    {
        if(tree[l].c == '.' or tree[r].c == '.')
            tree[node].c = '.';
        else
            tree[node].c = 'a';
        tree[node].p = max(tree[l].p,tree[r].p);
    }
}

int update(int node,int left,int right,int i,char c)
{
    if(left > i or right < i)return 0;
    else if(left == right)
    {
        s[right] = c;
        tree[node].c = c;
        return tree[node].p = 0;
    }
    int mid = (left+right)>>1;
    int l = node<<1;
    int r = (node<<1)+1;
    update(l,left,mid,i,c);
    update(r,mid+1,right,i,c);
    if(tree[l].c == tree[r].c and tree[r].c == '.')
    {
        tree[node].c = '.';
        tree[node].p = max(tree[l].p,tree[r].p)+1;
    }
    else
    {
        if(tree[l].c == '.' or tree[r].c == '.')
            tree[node].c = '.';
        else
            tree[node].c = 'a';
        tree[node].p = max(tree[l].p,tree[r].p);
    }
}

int main()
{
    fastio;
    ci(n),ci(q);
    ci(s);
    s = "0"+s;
    init(1,1,n);
    cout<<tree[1].p<<endl;
    while(q--)
    {
        int i;
        char c;
        cin>>i>>c;
        update(1,1,n,i,c);
        cout<<tree[1].p<<'\n';
    }
    newline;
    ret;
}















