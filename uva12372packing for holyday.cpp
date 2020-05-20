#include<iostream>
using namespace std;

int main()
{
    int t,l,w,h,count=1;
    cin>>t;
    while(t--)
    {
        cin>>l>>w>>h;
        if(l<=20 and w<=20 and h<=20)
        {
           cout<<"Case "<<count<<": good"<<endl;
        }
        else
           cout<<"Case "<<count<<": bad"<<endl;
        ++count;


    }
    return 0;
}
