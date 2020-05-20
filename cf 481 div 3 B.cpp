#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    scanf("%d",&len);
    char s[105],x[]={'x','x','x','\0'};
    scanf("%s",s);
    int cnt = 0;
    for(int i=0;i<len-2;i++)
    {
        char c[4];
        c[0] = s[i];
        c[1] = s[i+1];
        c[2] = s[i+2];
        c[3] = '\0';
        if(strcmp(c,x) == 0)++cnt;
    }
    printf("%d\n",cnt);
    return 0;
}
