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
int a[200005],n,m,d,day,i,cntn,temp;
struct val
{
    int ans,index;
    val(int c,int d)
    {
        ans = c;
        index = d;
    }
    inline bool operator<(val b)const
    {
        return ans < b.ans;
    }
};
set<val>ms;
set<val>::iterator it;

int main()
{
    sf(n),sf(m),sf(d);
    ++d;
    loopi(n)
    {
        sf(a[i]);
        ms.insert(val(a[i],i));
    }
    while(cntn < n)
    {
        ++cntn;
        it = ms.begin();
        temp = it->ans;
        a[it->index] = ++day;
        ms.erase(it);
        while(1)
        {
            it = ms.lower_bound(val(temp+d,0));
            if(it != ms.end())
            {
                a[it->index] = day;
                temp = it->ans;
                ++cntn;
                ms.erase(it);
            }
            else break;
        }
    }
    pf(day);
    newline;
    loopi(n)
    {
        pf(a[i]);
        pfc(' ');
    }
    ret;
}












