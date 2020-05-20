#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 int n;
 cin>>n;
 ll s[n],c[n];
 for(int i=0;i<n;i++)
    cin>>s[i];
 for(int i=0;i<n;i++)
    cin>>c[i];
 ll len = (n-1)*(n-2);
 ll sum = 1000000000000000000,cnt = 0;
 vector<ll>v[len];
 for(int i=0;i<n-2;i++)
 {
    for(int j=i+1;j<n-1;j++)
    {
     v[cnt].push_back(c[i]+c[j]);
     v[cnt].push_back(s[i]);
     v[cnt].push_back(s[j]);
     ++cnt;
    }
 }

 ll start=2,ct=0,l=3;
 for(int i=0;i<cnt;i++)
 {
    //cout<<v[i][1]<<' '<<v[i][2]<<endl;
    for(int j=start;j<n;j++)
    {
     cout<<v[i][1]<<' '<<v[i][2]<<' '<<s[j]<<endl;
     if(v[i][1]<v[i][2] and v[i][2]<s[j])
     {
        sum = min(sum,v[i][0]+c[j]);
     }
    }
    ++ct;
    if(ct == n-l)
    {
        ++start;
        ct=0;
        ++l;
    }
 }
 //cout<<ct<<endl;
 sum == 1000000000000000000 ? cout<<-1<<endl : cout<<sum<<endl;
 return 0;
}
















