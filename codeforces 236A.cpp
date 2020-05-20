#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 cin>>s;
 sort(s.begin(),s.end());
 int len=s.length(),cnt=1;
 for(int i=0;i<len;i++)
 {
     if(i>0 and s[i]!=s[i-1])
       ++cnt;
 }
 if(cnt%2!=0)
    printf("IGNORE HIM!");
 else
    printf("CHAT WITH HER!");
 return 0;
}
