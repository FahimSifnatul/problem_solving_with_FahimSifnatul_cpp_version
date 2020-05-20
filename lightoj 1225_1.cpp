#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cs=0;
    scanf("%d",&t);

    char s[9],r[9];
    while(t--)
    {
     scanf("%s",s);
     strcpy(r,s);
     int len=strlen(s);
     reverse(s,s+len);
     if(strcmp(s,r)==0)
        printf("Case %d: Yes\n",++cs);
     else
        printf("Case %d: No\n",++cs);
    }
    return 0;
}
