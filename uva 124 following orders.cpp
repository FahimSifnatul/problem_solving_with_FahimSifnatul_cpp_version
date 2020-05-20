/*bismillahir rahmanir rahim*/
//have to learn backtracking to solve this problem.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int slen,u,len;
    map<char,int>smap;
    map<int,char>print;
    queue<int>q,topsort;
    while(cin>>s and !cin.eof())
    {
     slen=s.size();
     vector<int>outdegree[(slen>>1)+1];
     int indegree[(slen>>1)+1];
     int cnt=1;
     for(int i=0;i<slen;i+=2)
     {
         smap[s[i]]=cnt;
         ++cnt;
     }
     cin>>s;
     len=s.size();
     for(int i=0;i<len;i+=4)
     {
      outdegree[smap[s[i]]].push_back(smap[s[i+2]]);
      ++indegree[smap[i+2]];
     }
     for(i=1;i<)
    }
}
