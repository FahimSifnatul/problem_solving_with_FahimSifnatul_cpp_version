#include<bits/stdc++.h>
using namespace std;
#define print(t,a) printf("Case %d: %d\n",t,a)
string s;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        cin>>s;
        int len = s.size(),ans = 0;
        for(int i=0;i<n;)
        {
            if(s[i] == '.')
            {
                ++ans;
                i += 3;
            }
            else ++i;
        }
        print(i,ans);
    }
}
















