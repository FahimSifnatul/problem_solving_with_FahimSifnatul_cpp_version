//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    string s[n],temp;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        temp = s[i];
        sort(temp.begin(),temp.end());
        ++mp[temp];
    }
    if(mp[temp] != n)
    {
        cout<<-1<<endl;
        return 0;
    }
    int len = s[0].length(), mi = 100000000;
    for(int i=0;i<n;i++)
    {
        string temp, check;
        int temp_result = 0;
        for(int j=0;j<n;j++)
        {
           if(s[j] == s[i]) continue;
           temp = s[j];
           int cnt = 0;
            while(true)
            {
                if(temp == s[i]) break;
                else
                {
                    check = temp;
                    temp = "";
                    for(int k=1;k<len;k++) temp += check[k];
                    temp += check[0];
                }
                ++temp_result;
                ++cnt;
                if(cnt == len)
                {
                    cout<<-1<<endl;
                    return 0;
                }
            }
            //cout<<check<<endl;
        }
        mi = min(mi,temp_result);
    }
    cout<<mi<<endl;
    return 0;
}






























