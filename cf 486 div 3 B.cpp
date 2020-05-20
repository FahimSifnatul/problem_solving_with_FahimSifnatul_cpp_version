#include<bits/stdc++.h>
using namespace std;

bool compare(string a,string b)
{
    return a.size()<b.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    sort(s,s+n,compare);
    //cout<<endl;
    for(int i=n-1;i>0;i--)
    {
       string str = s[i],temp="";
       int len1 = s[i].size(),len2 = s[i-1].size(),cnt = 0;
       bool check = false;
       for(int j=0;j<len1;j++)
       {
         temp = "";
         cnt = 0;
         for(int k=j;k<len1;k++)
         {
             if(cnt == len2)break;
             temp += str[k];
             ++cnt;
         }
         if(temp == s[i-1])
         {
           check = true;
           break;
         }
       }
       if(check == false)
       {
           cout<<"NO"<<endl;
           return 0;
       }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++)cout<<s[i]<<endl;
    return 0;
}
