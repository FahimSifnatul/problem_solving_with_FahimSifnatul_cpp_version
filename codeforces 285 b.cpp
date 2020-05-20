//bismillahir rahmanir rahim
//alhamdulillah solved
#include<bits/stdc++.h>
using namespace std;
int cnt=0;
map<string,string>mp;

string find(string s)
{
    if(mp[s]==s)return s;
    else
        return mp[s]=find(mp[s]);
}

int Union(string s1,string s2)
{//cout<<"ALLAHU AKBAR\n";
 string u=find(s1);
 string v=find(s2);
 if(u!=v)
 {
   mp[v]=u;
 }
}

int main()
{
    int n;
    cin>>n;
    string s1[n],s2[n];
    for(int i=0;i<n;i++)
    {
      cin>>s1[i]>>s2[i];
      mp[s1[i]]=s1[i];
      mp[s2[i]]=s2[i];
    }

    for(int i=0;i<n;i++)
    {
        Union(s1[i],s2[i]);
    }

    for(int i=0;i<n;i++)
        if(mp[s1[i]]==s1[i])
           ++cnt;

    cout<<cnt<<endl;

    for(int i=n-1;i>=0;i--)
    {
        //cout<<mp[s2[i]]<<' '<<mp[s1[i]]<<endl;
        if(mp[s1[i]]!="123456789123456789123" and mp[s2[i]]!="123456789123456789123")
        {
           cout<<mp[s2[i]]<<' '<<s2[i]<<endl;
           mp[s2[i]]="123456789123456789123";
           mp[s1[i]]="123456789123456789123";
        }
        else if(mp[s1[i]]!="123456789123456789123" or mp[s2[i]]!="123456789123456789123")
        {
           mp[s2[i]]="123456789123456789123";
           mp[s1[i]]="123456789123456789123";
        }
    }
    return 0;
}






