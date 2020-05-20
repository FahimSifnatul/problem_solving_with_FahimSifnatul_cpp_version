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
int n,m,cnt[100000],ok,q;
char s[30005];

int main()
{
    for(int i=1;i<=10;i++)
    {
        sf(n),sfs(s),sf(m);
        int check = n%2,fop,fc,sop,sc;
        fop = fc = sop = sc = 0;
        if(check == 0)
        {
            for(int i=0,j=n-1;i<j;i++,j--)
            {
                if(s[i] == '(')++fop;
                else if(s[i] == ')')++fc;
                if(s[j] == '(')++sop;
                else if(s[j] == ')')++sc;
            }
        }
        printf("Test %d:\n",i);
        while(m--)
        {
            sf(q);
            if(q == 0)
            {
                //printf("%d %d %d %d\n",fop,fc,sop,sc);
               (fop+sop != fc+sc or fop < fc or sop > sc or (fop == fc and sop == sc and s[0] == ')' and s[n-1] == '(') or check)
                ? p("NO\n") : p("YES\n")  ;
            }
            else if(check == 0)
            {
                --q;
                if(q <= (n-1)/2)
                {
                    if(s[q] == '(')
                    {
                        --fop,++fc;
                    }
                    else
                    {
                        ++fop,--fc;
                    }
                }
                else
                {
                    if(s[q] == '(')
                    {
                        --sop,++sc;
                    }
                    else
                    {
                        ++sop,--sc;
                    }
                }
            }
        }
    }
    newline;
    ret;
}
















