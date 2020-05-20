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
    string n,m,temp;
    ci(n),ci(m);
    if(n == "0")
    {
        if(m == "0")
            co("OK");
        else
            co("WRONG_ANSWER");
        return 0;
    }
    temp = n;
    sort(temp.begin(),temp.end());
    if(temp[0] == '0')
    {
        int len = temp.size();
        for(int i=0;i<len;i++)
        {
            if(temp[i] != '0')
            {
                reverse(temp.begin(),temp.begin()+i+1);
                break;
            }
        }
    }
    temp == m ? co("OK") : co("WRONG_ANSWER");
    newline;
    return 0;
}











