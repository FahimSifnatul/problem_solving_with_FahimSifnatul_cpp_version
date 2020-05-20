//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, ma = 0, len;
    string s;
    set<char>st;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i] >= 'a' and s[i] <= 'z') st.insert(s[i]);
        else len = st.size(), ma = max(ma, len), st.clear();
    }
    len = st.size(), ma = max(ma, len);
    cout<<ma<<endl;
    return 0;
}
