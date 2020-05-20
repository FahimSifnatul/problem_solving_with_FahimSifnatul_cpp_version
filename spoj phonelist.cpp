#include<stdio.h>
#include<string.h>

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
bool ok;
struct node
{
    bool eow;
    node *next[10];
    node()
    {
        eow = 0;
        loopi(10)next[i] = NULL;
    }
};

void Insert(char s[],node *root)
{
    int len = strlen(s);
    node *curr = root;
    loopi(len)
    {
        int id = s[i] - '0';
        if(curr->eow == 1 or (i == len-1 and curr->next[id] != NULL))
        {
            ok = 0;
            return;
        }
        if(curr->next[id] == NULL)
            curr->next[id] = new node;
        curr = curr->next[id];
    }
    curr->eow = 1;
}

void del(node *cur)
{
    loopi(10)
        if(cur->next[i])
            del(cur->next[i]);
    delete cur;
}

int main()
{
    int t,n;
    char s[10005];
    sf(t);
    for(int i=1;i<=t;i++)
    {
        sf(n);
        ok = 1;
        node *root = new node;
        while(n--)
        {
            sfs(s);
            if(ok)Insert(s,root);
        }
        printf("Case %d: ",i);
        ok ? p("YES\n") : p("NO\n");
        del(root);
    }
    ret;
}







