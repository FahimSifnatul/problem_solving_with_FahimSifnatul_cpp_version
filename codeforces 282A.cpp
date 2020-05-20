#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
    int x=0,n,len;
    string s;
    scanf("%d",&n);
    cin.ignore();
    for(int i=0;i<n;i++)
    {
     cin>>s;
     if(s=="X++" or s=="++X")
        ++x;
     else
        --x;
    }
    printf("%d\n",x);
    return 0;
}
