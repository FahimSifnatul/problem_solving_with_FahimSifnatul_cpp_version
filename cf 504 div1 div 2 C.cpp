#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    string s;
    cin>>n>>k>>s;
    int o=k>>1,c=k>>1;
    for(int i=0;i<n;i++)
    {
       if(o==0 and c==0)break;
       if(s[i] == '(' and o>0)
       {
          cout<<s[i];
          --o;
       }
       else if(s[i] == ')' and o<c)
       {
          cout<<s[i];
          --c;
       }
    }
    return 0;
}







