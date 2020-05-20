#include<bits/stdc++.h>
using namespace std;
int n,m;
string s,t;

bool finding_star()
{
    for(int i=0;i<n;i++)
    {
        if(s[i] == '*')
           return true;
    }
    return false;
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cin>>n>>m>>s>>t;
 bool star = finding_star();
 if(star == false)
 {
   s == t ? cout<<"YES" : cout<<"NO";
 }
 else if(m <= n-2)
 {
   cout<<"NO";
 }
 else
 {
     //bool check = true;
     for(int i=0;i<n;i++)
     {
        if(s[i] == '*')break;
        if(s[i] != t[i])
        {
            cout<<"NO";
            return 0;
        }
     }
     reverse(s.begin(),s.end());
     reverse(t.begin(),t.end());
     for(int i=0;i<n;i++)
     {
        if(s[i] == '*')break;
        if(s[i] != t[i])
        {
            cout<<"NO";
            return 0;
        }
     }
     cout<<"YES";
 }
}











