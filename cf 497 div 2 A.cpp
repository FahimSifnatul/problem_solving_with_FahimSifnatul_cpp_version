#include<bits/stdc++.h>
using namespace std;

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
map<char,bool>mp;

int main()
{
    mp['a'] = mp['e'] = mp['i'] = mp['o'] = mp['u'] = mp['n'] = 1;
    string s;
    cin>>s;
    int len = s.size();
    for(int i=1;i<len;i++)
    {
        if(mp[s[i-1]] == 0 and mp[s[i]] == 0)
        {
            co("NO");
            return 0;
        }
        if(mp[s[i-1]] == 0 and s[i] == 'n')
        {
            co("NO");
            return 0;
        }
    }
    if(mp[s[len-1]] == 0)
    {
        co("NO");
        return 0;
    }
    co("YES");
    newline;
    return 0;
}










