#include<bits/stdc++.h>
using namespace std;

int main()
{
 string s,temp="";
 long long int lens,lentemp;
 while(getline(cin,s))
 {
   lens=s.length();
 for(int i=0;i<lens;i++)
 {
     if(s[i]!=' ')
     {
       temp+=s[i];
     }
     else if(s[i]==' ')
     {
       lentemp=temp.length();
       reverse(temp.begin(),temp.end());
       s.erase(i-lentemp,lentemp);
       s.insert(i-lentemp,temp);
       temp="";
     }
     if(i==lens-1)
     {
       lentemp=temp.length();
       reverse(temp.begin(),temp.end());
       s.erase(i-lentemp+1,lentemp);
       s.insert(i-lentemp+1,temp);
       temp="";
     }
 }
 cout<<s<<endl;
 }

 return 0;
}
