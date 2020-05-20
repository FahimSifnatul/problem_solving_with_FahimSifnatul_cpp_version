#include<bits/stdc++.h>
using namespace std;

bool compare(string a,string b)
{
    return a > b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    int len = s.size(),pos = -1;
        for(int i = 0,j=0; i< len-1; i++)
        {
           if((s[i] - '0')%2 == 0)
           {
               if(s[i] < s[len-1])
               {
                  swap(s[i],s[len - 1]);
                  cout<<s;
                  return 0;
               }
               else pos = i;
           }
        }
        if(pos != -1)
        {
          swap(s[pos],s[len-1]);
          cout<<s;
        }
        else cout<<-1<<endl;
    return 0;
}
