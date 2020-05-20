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

#define loopi(n) for(int i=0;i<n;i++)
#define loopd(n) for(int i=n-1;i>=0;i--)
int slen,t;
char c;
string s;
map<string,int>mp;

int main()
{
    fastio;
    ci(t);
    while(t--)
    {
       cin>>c>>s;
       slen = s.size();
       reverse(s.begin(),s.end());
       for(int i=slen;i<18;i++) s += "0";
       if(c == '+' or c == '-')
       {
           loopi(slen)
           {
               if(s[i]%2) s[i] = '1';
               else       s[i] = '0';
           }
           c == '+' ? ++mp[s] : --mp.find(s)->second;
       }
       else
       {
           cout<<mp[s]<<'\n';
       }
    }
    return 0;
}














