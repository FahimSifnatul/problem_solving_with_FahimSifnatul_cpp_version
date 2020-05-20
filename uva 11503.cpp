#include<bits/stdc++.h>
using namespace std;
map<string,string>mp;
map<string,int>r;

string FIND(string s)
{
 return (mp[s] == s ? s : mp[s] = FIND(mp[s]));
}

int UNION(string s1,string s2)
{
 string x = FIND(s1);
 string y = FIND(s2);
 if(x != y)
 {
     if(r[x]>r[y]) r[x] += r[y], mp[y] = x;
     else r[y] += r[x], mp[x] = y;
 }
 return max(r[x],r[y]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        //map<string,int>mp;
        string s1,s2;
        while(n--)
        {
            cin>>s1>>s2;
            if(r[s1] == 0) mp[s1] = s1, r[s1] = 1;
            if(r[s2] == 0) mp[s2] = s2, r[s2] = 1;
            cout<<UNION(s1,s2)<<endl;
        }
        r.clear();
        mp.clear();
    }
}
