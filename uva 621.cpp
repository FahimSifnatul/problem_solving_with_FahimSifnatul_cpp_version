/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    string s;
    while(n--)
    {
        cin>>s;
        int len=s.length();
        if(s=="1" or s=="4" or s=="78")
            printf("+\n");
        else if(s[len-1]=='5' and s[len-2]=='3' and len>1)
            printf("-\n");
        else if(s[0]=='9' and s[len-1]=='4' and len>1)
            printf("*\n");
        else
            printf("?\n");
    }
    return 0;
}
