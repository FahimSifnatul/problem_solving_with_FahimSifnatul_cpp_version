//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
string s;
vector<int>v;
int len,cnt,ma;

int main()
{
    cin>>s;
    len=s.length();
    cnt=1;
    for(int i=1;i<len;i++)
    {
        if(s[i]==s[i-1])++cnt;
        else
        {
            v.push_back(cnt);
            cnt=1;
        }
    }
    v.push_back(cnt);
    len=v.size();
    int i;
    if(s[0]=='1')i=0;
    else i=1;
    while(i<len)
    {
        if(i==0)ma=max(ma,v[i+1]);
        else if(i==len-1)ma=max(ma,v[len-2]);
        else if(v[i]==1 and len>5)ma=max(ma,v[i-1]+v[i+1]+1);
        else if(v[i]==1 and len<=5)ma=max(ma,v[i-1]+v[i+1]);
        else ma=max(ma,max(v[i-1]+1,v[i+1]+1));
     i+=2;
    }
    cout<<ma;
    return 0;
}












