#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp!=0)s.insert(temp);
    }
    cout<<s.size();
    return 0;
}
