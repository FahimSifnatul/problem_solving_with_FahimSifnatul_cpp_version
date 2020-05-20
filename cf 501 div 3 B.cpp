#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    string s,t,t1,t2;
    cin>>n>>s>>t;
    t1 = s,t2 = t;
    sort(t1.begin(),t1.end());
    sort(t2.begin(),t2.end());
    if(t1 != t2)
    {
        cout<<-1<<endl;
        return 0;
    }
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        if(s[i] != t[i])
        {
            bool flg = false;
            for(int j=n-1;j>i;j--)
            {
               if(t[i] == s[j])flg = true;
               if(flg == true)
               {
                   swap(s[j],s[j-1]);
                   v.push_back(j);
               }
            }
        }
    }
    n = v.size();
    cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<' ';
    }
    return 0;

}

















