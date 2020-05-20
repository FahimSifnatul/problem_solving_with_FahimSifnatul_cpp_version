#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    unsigned long long int x;
    int i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        x=pow(2,x)/12000;
        cout<<x<<" kg\n";
    }
    return 0;
}
