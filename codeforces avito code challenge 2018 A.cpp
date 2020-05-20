#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s,check1,check2;
    cin>>s;
    int len = s.length();
    for(int i=0;i<len;i++)
    {
       check1 = s;
       reverse(s.begin(),s.end());
       check2 = s;
       if(check1 != check2 or s == "")
       {
           cout<<s.length();
           return 0;
       }
       if(i%2 == 0)
       {
         check2.erase(0,1);
         s = check2;
       }
       else
       {
         check1.erase(0,1);
         s = check1;
       }
    }
    cout<<0;
    return 0;
}








