//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,pair=0,mi;
    char c;
    cin>>n;
    map<int,int>left,right;
    for(int i=0;i<n;i++)
    {
        cin>>s>>c;
        if(c=='R') ++right[s];
        else ++left[s];
        mi=min(right[s],left[s]);
        pair+=mi;
        right[s]-=mi;
        left[s]-=mi;
    }
    cout<<pair<<endl;
}













