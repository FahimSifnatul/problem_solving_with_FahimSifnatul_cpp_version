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
#define ret return 0
#define pi acos(-1.0)

#define loopi(n) for(int i=0;i<n;i++)
#define loopd(n) for(int i=n-1;i>=0;i--)

int main()
{
    int t;
    char s[105];
    sf(t);
    while(t--)
    {
        sfs(s);
        int len = strlen(s);
        int okl = 0,oku = 0, okd = 0;
        loopi(len)
        {
            if(s[i]>='a' and s[i]<='z')++okl;
            else if(s[i]>='A' and s[i]<='Z')++oku;
            else ++okd;
        }
        if(okl and oku and okd);
        else if(okl and oku)
        {
            if(okl > 1 and oku > 1)
            {
                s[0] = '1';
            }
            else if(okl == 1)
            {
                if(s[0]>='a' and s[0]<='z')
                    s[1] = '1';
                else s[0] = '1';
            }
            else if(oku == 1)
            {
                if(s[0]>='A' and s[0]<='Z')
                    s[1] = '1';
                else s[0] = '1';
            }

        }
        else if(oku and okd)
        {
            if(oku > 1 and okd > 1)
            {
                s[0] = 'a';
            }
            else if(oku == 1)
            {
                if(s[0]>='A' and s[0]<='Z')
                    s[1] = 'a';
                else s[0] = 'a';
            }
            else if(okd == 1)
            {
                if(s[0]>='0' and s[0]<='9')
                    s[1] = 'a';
                else s[0] = 'a';
            }
        }
        else if(okd and okl)
        {
            if(okd > 1 and okl > 1)
            {
                s[0] = 'A';
            }
            else if(okd == 1)
            {
                if(s[0]>='0' and s[0]<='9')
                    s[1] = 'A';
                else s[0] = 'A';
            }
            else if(okl == 1)
            {
                if(s[0]>='a' and s[0]<='z')
                    s[1] = 'A';
                else s[0] = 'A';
            }
        }
        else if(okl)
        {
             s[len-1] = '1';
             s[len-2] = 'A';
        }
        else if(oku)
        {
             s[len-1] = '1';
             s[len-2] = 'a';
        }
        else if(okd)
        {
             s[len-1] = 'a';
             s[len-2] = 'A';
        }
        pfs(s);
        newline;
    }
    ret;
}













