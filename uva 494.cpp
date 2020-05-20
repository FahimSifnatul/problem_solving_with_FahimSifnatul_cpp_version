#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    long long int count,j,i,flag;
    while(getline(cin,s))
    {
        count=0;
        flag=0;
        for(i=0;i<s.length();i++)
        {
           if((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z'))
           {
               ++flag;
           }
           else
               flag=0;
           if(flag==1)
           {
               ++count;
           }
        }

        cout<<count<<endl;
    }
}
