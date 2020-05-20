#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>n;
    vector<int>v[n];
    while(n--)
    {
      cin>>k;
      int temp;
      for(int i=0;i<k;i++)
        cin>>temp,v[i].push_back(temp);
    }
    return 0;
}
