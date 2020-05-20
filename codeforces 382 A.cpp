#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,g,t;
    string s;
    cin>>n>>k>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='G')
            g=i;
        if(s[i]=='T')
            t=i;
    }
    if(g<t)
    {
      for(int i=g+k;;i+=k)
      {
       if(s[i]=='#' or i>t)
       {
           cout<<"NO\n";
           return 0;
       }
       if(s[i]=='T')
       {
           cout<<"YES\n";
           return 0;
       }
      }
    }
    else
    {
      for(int i=g-k;;i-=k)
      {
       if(s[i]=='#' or i<t)
       {
           cout<<"NO\n";
           return 0;
       }
       if(s[i]=='T')
       {
           cout<<"YES\n";
           return 0;
       }
      }
    }
}
