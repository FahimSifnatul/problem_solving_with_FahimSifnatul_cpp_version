#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
vector<string>v;

bool compare(string a,string b)
{
  return mp[a]<mp[b];
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   int n;
   string s;
   cin>>n>>s;
   for(int i=1;i<n;i++)
   {
       string temp = "";
       temp += s[i-1];
       temp += s[i];
       v.push_back(temp);
       ++mp[temp];
       //cout<<temp<<endl;
   }
   sort(v.begin(),v.end(),compare);
   cout<<v[n-2]<<endl;
   return 0;
}
