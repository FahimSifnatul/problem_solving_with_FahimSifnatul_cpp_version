#include<string>
#include<iostream>
using namespace std;

class st
{
public:
    void str();
}m;

class lw
{
    string s;
public:
    void input()
    {
        cin>>s;
    }
    friend void st::str();
}n;

void st::str()
{
    int cnt=0,len=n.s.length();
    if(len>10)
        cout<<n.s[0]<<len-2<<n.s[len-1]<<endl;
    else
        cout<<n.s<<endl;
}


int main()
{
   int k;
   cin>>k;
   while(k--)
   {
    n.input();
    m.str();
   }

   return 0;
}







