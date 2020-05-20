#include<bits/stdc++.h>
using namespace std;

int main()
{
   char s[55];
   int n,cnt=0;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       scanf(" %c",&s[i]);
       if(i>0)
       {
           if(s[i]==s[i-1])
            ++cnt;
       }
   }
   printf("%d",cnt);
   return 0;
}
