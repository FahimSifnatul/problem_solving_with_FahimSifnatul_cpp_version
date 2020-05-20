//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
string s;
int len,cnt=0;

int main()
{
 cin>>s;
 len=s.length();
 for(int i=1;i<len;i++)
 {
     if(s[i]=='K' and s[i-1]=='V')
     {
         ++cnt;
         s[i]='-';
         s[i-1]='-';
     }
 }
 for(int i=1;i<len;i++)
 {
     if((s[i]=='K' and s[i-1]=='K') or (s[i]=='V' and s[i-1]=='V'))
     {
         ++cnt;
         break;
     }
 }
 printf("%d",cnt);
 return 0;
}
