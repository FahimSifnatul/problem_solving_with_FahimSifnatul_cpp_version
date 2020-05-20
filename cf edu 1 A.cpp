#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int

#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)

#define sf(a) scanf("%d",&a)
#define sfl(a) scanf("%lld",&a)
#define sfd(a) scanf("%lf",&a)
#define sfs(a) scanf("%s",a)
#define pf(a) printf("%d",a)
#define pfl(a) printf("%lld",a)
#define pfd(a) printf("%lf",a)
#define pfc(a) printf("%c",a)
#define pfs(a) printf("%s",s)
#define ci(a) cin>>a
#define co(a) cout<<a
#define pb(a) push_back(a)
#define newline printf("\n")

#define loopi(n) for(int i=0;i<n;i++)
#define loopd(n) for(int i=n-1;i>=0;i--)


int main()
{
    int q;
    string s,left,right;
    ci(s);
    sf(q);
    loopi(q)
    {
        int l,r,k;
        sf(l),sf(r),sf(k);
        int len = r-l+1;
        int rot = k%len;
        left = s.substr(r-rot,rot);
        right = s.substr(l-1,len-rot);
        //cout<<left<<' '<<right<<endl;;
        for(int i=l-1,j=0,k=0;i<r;i++,j++)
        {
            if(j < rot)
                s[i] = left[j];
            else s[i] = right[k],++k;
        }
    }
    co(s);
    newline;
    return 0;
}














