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
#define pfs(a)     printf("%s",a)
#define ci(a)      cin>>a
#define co(a)      cout<<a
#define pb(a)      push_back(a)
#define newline    printf("\n")
#define ret        return 0
#define pi         acos(-1.0)
#define mod        1000000007

#define loopi(n) for(int i=0;i<n;i++)
#define loopd(n) for(int i=n-1;i>=0;i--)

struct node
{
    bool eow;
    node *next[26];
    node()
    {
        eow = 0;
        loopi(26)next[i] = NULL;
    }
}*root = new node;

void Insert(char s[])
{
    int len = strlen(s);
    node *curr = root;
    for(int i=0;i<len;i++)
    {
        int id = s[i] - 'a';
        if(curr->next[id] == NULL)
            curr->next[id] = new node;
        curr = curr->next[id];
    }
    curr->eow = 1;
}

int dfs(node *curr,char* s,char* tail,int len)
{
    if(curr->eow == 1 and len)
    {
        pfs(s),pfs(tail),newline;
    }
    loopi(26)
    {
        if(curr->next[i] != NULL)
        {
            tail[len++] = i+'a';
            tail[len] = '\0';
            dfs(curr->next[i],s,tail,len);
            tail[--len] = '\0';
        }
    }
}

void query(char s[])
{
    int len = strlen(s);
    node *curr = root;
    for(int i=0;i<len;i++)
    {
        int id = s[i] - 'a';
        if(curr->next[id] == NULL)
        {
            p("No match.\n");
            return;
        }
        curr = curr->next[id];
    }
    bool ok = 0;
    loopi(26)
    {
        if(curr->next[i] != NULL)
        {
            ok = 1;
            break;
        }
    }
    if(!ok)
    {
        p("No match.\n");
        return;
    }
    char tail[25];
    dfs(curr,s,tail,0);
}

int main()
{
    int n,k;
    char s[25];
    sf(n);
    while(n--)
    {
        sfs(s);
        Insert(s);
    }
    sf(k);
    for(int i=1;i<=k;i++)
    {
        sfs(s);
        printf("Case #%d:\n",i);
        query(s);
    }
    ret;
}



















