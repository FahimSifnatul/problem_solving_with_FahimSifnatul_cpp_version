#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
       char S1[105],S2[105];
       vector<char>s1,s2;
       gets(S1);
       gets(S2);
       int l1 = strlen(S1),l2 = strlen(S2);
       for(int i=0;i<l1;i++)
       {
           if(S1[i]>='A' and S1[i]<='Z')
             s1.push_back(S1[i] + 32);
           else if(S1[i] != ' ')
             s1.push_back(S1[i]);
       }
       for(int i=0;i<l2;i++)
       {
           if(S2[i]>='A' and S2[i]<='Z')
             s2.push_back(S2[i] + 32);
           else if(S2[i] != ' ')
             s2.push_back(S2[i]);
       }
       stable_sort(s1.begin(),s1.end());
       stable_sort(s2.begin(),s2.end());
       cout<<"Case "<<j<<": ";
       l1 = s1.size(),l2 = s2.size();
       if(l1 != l2)
          cout<<"No";
       else
       {
          bool check = true;
          for(int i=0;i<l1;i++)
          {
              if(s1[i] != s2[i])
              {
                check = false;
                break;
              }
          }
          check == true ? cout<<"Yes" : cout<<"No";
       }
       cout<<endl;
    }
    return 0;
}
