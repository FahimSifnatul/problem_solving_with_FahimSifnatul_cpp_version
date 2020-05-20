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
int a[105],check[105],n,cnt;

struct val
{
    int a,index;
    char c;
};

bool cmp1(val x,val y){return x.a < y.a;}
bool cmp2(val x,val y){return x.index < y.index;}

int main()
{
    sf(n);
    val v[n];
    loopi(n)
    {
        sf(v[i].a);
        v[i].index = i;
        ++check[v[i].a];
    }
    loopi(101)
       if(check[i]==1 or check[i]>=3)++cnt;
       else if(check[i])cnt +=2;
    if(cnt%2)p("NO");
    else
    {

        p("YES\n");
        int ok = 0;
        bool ab = 1;
        sort(v,v+n,cmp1);
        v[0].c = 'B';
        for(int i=1;i<n;i++)
        {
            if(v[i].a == v[i-1].a and ok==0)
            {
                ++ok;
                if(v[i-1].c == 'A')v[i].c = 'B';
                else if(v[i-1].c == 'B')v[i].c = 'A';
            }
            else if(v[i].a == v[i-1].a and ok == 1)
            {
                v[i].c = v[i-1].c;
            }
            else
            {
                if(ab)v[i].c = 'A';
                else v[i].c = 'B';
                ab ^= 1;
                ok = 0;
            }
        }
        sort(v,v+n,cmp2);
        loopi(n)pfc(v[i].c);
    }
    newline;
    ret;
}










