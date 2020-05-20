#include<bits/stdc++.h>
using namespace std;
map<string,bool>mp2;

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 map<string,string>mp1;
 mp1["purple"]="Power";
 mp1["green"]="Time";
 mp1["blue"]="Space";
 mp1["orange"]="Soul";
 mp1["red"]="Reality";
 mp1["yellow"]="Mind";
 int n;
 cin>>n;
 vector<string>v;
 string a[]={"purple", "green", "blue", "orange", "red", "yellow"};
 for(int i=0;i<n;i++)
 {
     string s;
     cin>>s;
     mp2[s] = true;
 }
 cout<<6-n<<endl;
 for(int i=0;i<6;i++)
 {
     if(mp2[a[i]] == false)
        cout<<mp1[a[i]]<<endl;
 }
 return 0;
}






