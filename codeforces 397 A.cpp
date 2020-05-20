/*bismillahir rahmanir rahim*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,s1=0,s2=0;
 string t,s,temp;
 cin>>n;
 cin.ignore();
 cin>>t;
 for(int i=0;i<n;i++)
 {
  cin>>s;
  temp.clear();
  temp+=s[0];
  temp+=s[1];
  temp+=s[2];
  if(temp==t)
    ++s1;
  temp.clear();
  temp+=s[5];
  temp+=s[6];
  temp+=s[7];
  if(temp==t)
    ++s2;
 }
 if(s1<=s2)
    cout<<"home";
 else
    cout<<"contest";
    //cout<<s1<<' '<<s2;
 return 0;
}

