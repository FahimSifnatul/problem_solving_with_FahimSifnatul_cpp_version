#include<bits/stdc++.h>
char s[100005];

int main()
{
     int t;
     scanf("%d",&t);
     for(int i=1;i<=t;i++)
     {
         scanf("%s",s);
         int len = strlen(s);
         if(len == 1 and s[0] != '9')
         {
             printf("Case %d: %c\n",t,s[0]+1);
         }

     }
}








