#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n;
 string s,temp;
 while(!cin.eof() and cin>>n)
 {
  s="1";
  for(int i=1;i<n-1;i++)
    s+="3";
  s+="2";
  temp=s;
  if(n%2!=0)
  {
      cout<<s<<endl;
      for(int i=1;i<n/2;i++)
      {
        int flg=0;
       for(int j=0;j<s.length();j++)
       {
           if(s[j]=='1' and flg==0)
           {
              swap(s[j],s[j+1]);
              ++flg;
           }
           else if(s[j]=='2' and flg==1)
           {
               swap(s[j],s[j-1]);
               ++flg;
           }
       }
       cout<<s<<endl;
      }

       for(int i=1;i<=n;i++)
       {
           if(i!=(n+1)/2)
            cout<<"3";
           else
            cout<<"2";
       }
       cout<<endl;
       reverse(s.begin(),s.end());
       cout<<s<<endl;
       for(int i=1;i<n/2;i++)
      {
        int flg=0;
       for(int j=0;j<s.length();j++)
       {
           if(s[j]=='1' and flg==1)
           {
              swap(s[j],s[j+1]);
              ++flg;
           }
           else if(s[j]=='2' and flg==0)
           {
               swap(s[j],s[j-1]);
               ++flg;
           }
       }
       cout<<s<<endl;
      }
    }

  else
  {
      cout<<s<<endl;
      for(int i=1;i<n/2;i++)
      {
        int flg=0;
       for(int j=0;j<n;j++)
       {
           if(s[j]=='1' and flg==0)
           {
              swap(s[j],s[j+1]);
              ++flg;
           }
           else if(s[j]=='2' and flg==1)
           {
               swap(s[j],s[j-1]);
               ++flg;
           }
       }
       cout<<s<<endl;
      }

       swap(s[n/2-1],s[n/2]);
       //cout<<s<<endl;
       cout<<s<<endl;
       for(int i=1;i<n/2;i++)
      {
        int flg=0;
       for(int j=0;j<n;j++)
       {
           if(s[j]=='1' and flg==1)
           {
              swap(s[j],s[j+1]);
              ++flg;
           }
           else if(s[j]=='2' and flg==0)
           {
               swap(s[j],s[j-1]);
               ++flg;
           }
       }
       cout<<s<<endl;
      }
    }
  }

 return 0;
}
