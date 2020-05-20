#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(s.length()==5)
        {
            cout<<"3"<<endl;
        }
        else if((s[0]=='t' and s[1]=='w') or (s[1]=='w' and s[2]=='o') or (s[0]=='t' and s[2]=='o'))
        {
            cout<<"2"<<endl;
        }
        else
            cout<<"1"<<endl;
    }
    return 0;
}
