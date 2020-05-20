#include<iostream>
using namespace std;
int main()
{
    double a;
    int i,count,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        count=0;
        cin>>a;
        for(int j=0;a>1;j++)
        {
            a=a/2;
            ++count;
        }
        cout<<count<<" dias\n";
    }
}
