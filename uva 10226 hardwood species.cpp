#include<bits/stdc++.h>
using namespace std;

#define ll         long long int
#define ull        unsigned long long int
#define fastio     ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define sf(a)      scanf("%d ",&a)
#define sfl(a)     scanf("%lld",&a)
#define sfd(a)     scanf("%lf",&a)
#define sfs(a)     scanf("%s",a)
#define sfc(a)     scanf("%c",&a)
#define p(a)       printf(a)
#define pf(a)      printf("%d",a)
#define pfl(a)     printf("%lld",a)
#define pfd(a)     printf("%.4lf",a)
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
char s[32];
int len,tree;
struct node
{
    int eow,cnt;
    node *next[53];
    node()
    {
        eow = cnt = 0;
        loopi(53)next[i] = NULL;
    }
};

void Insert(node *root)
{
    node *cur = root;
    loopi(len)
    {
        if(s[i] >= 'a' and s[i] <= 'z')
        {
            if(cur->next[s[i]-'a'] == NULL)
                cur->next[s[i]-'a'] = new node;
            cur = cur->next[s[i]-'a'];
        }
        else if(s[i] == ' ')
        {
            if(cur->next[52] == NULL)
                cur->next[52] = new node;
            cur = cur->next[52];
        }
        else
        {
            if(cur->next[s[i]-'A'+26] == NULL)
                cur->next[s[i]-'A'+26] = new node;
            cur = cur->next[s[i]-'A'+26];
        }
    }
    cur->eow = 1;
    ++cur->cnt;
}

void dfs(node *cur, char s[], int len)
{
    if(cur->eow)
    {
        pfs(s),p(" "),pfd((double)cur->cnt/tree*100.00);
        newline;
    }
    loopi(53)
    {
        if(cur->next[i] != NULL)
        {
            if(i < 26)
                s[len] = i + 'a';
            else if(i < 52)
                s[len] = i - 26 + 'A';
            else s[len] = ' ';
            s[++len] = '\0';
            dfs(cur->next[i],s,len);
            s[--len] = '\0';
        }
    }
}

void del(node *cur)
{
    loopi(53)
    {
        if(cur->next[i] != NULL)
            del(cur->next[i]);
    }
    delete cur;
}

int main()
{
    int t;
    sf(t);
    while(t--)
    {
        node *root = new node;
        tree = 0;
        while(true)
        {
            loopi(32)
            {
                sfc(s[i]);
                if(s[i] == '\n')
                {
                    s[i] = '\0';
                    len = i;
                    break;
                }
            }
            if(s[0] == '\0')break;
            ++tree;
            Insert(root);
        }
        s[0] = '\0';
        dfs(root,s,0);
        //del(root);
        newline;
    }
    ret;
}










